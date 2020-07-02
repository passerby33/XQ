import requests
from bs4 import BeautifulSoup
import re
import pandas as pd
import datetime
import time
pages = set()
Hostreferer = {
    'User-Agent':'Mozilla/4.0 (compatible; MSIE 6.0; Windows NT 5.1)'
    }
results = re.compile("http://[^www][A-Za-z0-9]{9,50}\.fang\.com[^*]$")
def getHouseLink(page):
    url = "https://bj.fang.ke.com/loupan"+str(page)+"/?ctm=1.sh.xf_search.page.1"
    start_html = requests.get(url, headers=Hostreferer)
    bsObj = BeautifulSoup(start_html.text, "html.parser")
    h_link = bsObj.find_all("a",{"target":"_blank","href":results})
    for link in h_link:
        if 'href' in link.attrs:
            if link.attrs['href'] not in pages:
                newpage = link.attrs['href']
                print(newpage)
                pages.add(newpage)
    return pages
HousesInfoLinks = set()
def getHouseInfoLink(houselinks):
    for link in houselinks:
        start_html = requests.get(link, headers=Hostreferer)
        bsObj = BeautifulSoup(start_html.text, "html.parser")
        link_vas = bsObj.find("div", {"id": "orginalNaviBox", "class": "navleft tf"})  #
        house_name_link = link
        info_link_temp = link_vas.find("a",{"id":"xfptxq_B03_08","target":"_self"})
        houseTypeLink = link_vas.find("a",{"id":"xfptxq_B03_10","target":"_self"})
        dianping_links = link_vas.find("a",{"id":"xfptxq_B03_17","target":"_self"})
        if info_link_temp == None or houseTypeLink == None or dianping_links == None :
            print("Title could not be found")
        else:
            infolink = info_link_temp.get('href')
            typelink = houseTypeLink.get('href')
            dianping_link = dianping_links.get('href')
            print(infolink+typelink)
            if infolink not in pages:
                    print(infolink)
                    temps = getHouseInfo(house_name_link,infolink,typelink,dianping_link)
                    if temps == None:
                        print("------------------")
                    else:
                        HousesInfoLinks.add(infolink)
    return HousesInfoLinks
titles = ['品名','户型','价格','详情链接','户型链接', '装修状况','占地面积', 'isvrfuturehome','subway','taxfree','houseinfo']
info_lists = list()
def getHouseInfo(house_name_link,link,typelink,dianping_link):
    info_list = list()
    start_html = requests.get(link, headers=Hostreferer)
    start_html.encoding = 'gb18030'
    bsObj = BeautifulSoup(start_html.text, "html.parser")
    title = bsObj.find("a",{"class":"ts_linear","id":""}).get_text()
    price = bsObj.find("div",{"class":"main-info-price"}).em.get_text().strip()
    pingjias = bsObj.find("div",{"class":"main-info-comment"}).get_text().replace("\n", "").replace("\t", "").split(" ")[1].split("[")[0]
    str_Type = huxingcaiji(typelink)
    info_list.append(title)
    info_list.append(str_Type)
    info_list.append(price)
    info_list.append(pingjias)
    info_list.append(house_name_link)
    info_list.append(link)
    info_list.append(typelink)
    info_list.append(dianping_link)
    temp_looks = bsObj.find("div",{"id":"sjina_C13_08","class":"contentHot"}).find_all("a",{"class":"btn-sign"})
    look_link = ""
    if temp_looks == None:
        print("look Link is None")
    else:
        for item in temp_looks:
            link = item.get('href')
            look_link = look_link + "|" + link +"|"
    info_list.append(look_link)
    info_1 = bsObj.find_all("ul",{"class":"list clearfix"})
    for temp in info_1:
        infotype = temp.find_all("div",{"class":"list-left"})
        infotype_1 = temp.find_all("div",{"class":"list-right"})
        for x, y in zip(infotype, infotype_1):
            key = re.sub('[\t\n]', "", re.sub(r'<[^>]+>', "", str(x))).replace("：", "")
            values = re.sub('[\t\n]', "", re.sub(r'<[^>]+>', "", str(y))).replace(" ", "").replace("普通住宅:", "")
            info_list.append(values)
    info_2 = bsObj.find_all("ul",{"class":"clearfix list"})
    for temp in info_2:
        infotype = temp.find_all("div",{"class":"list-left"})
        infotype_1 = temp.find_all("div",{"class":"list-right"})
        for x, y in zip(infotype, infotype_1):
            key = re.sub('[\t\n]', "", re.sub(r'<[^>]+>', "", str(x))).replace("：", "")
            values = re.sub('[\t\n]', "", re.sub(r'<[^>]+>', "", str(y))).replace(" ", "").replace("\xa0", "")
            # for item in values:
            if values == " " or values == "":
                values = "-"
            info_list.append(values)
    info_lists.append(info_list)
    return  info_lists
def huxingcaiji(typelink):
    start_html = requests.get(typelink, headers=Hostreferer)
    start_html.encoding = 'gb18030'
    bsObj = BeautifulSoup(start_html.text, "html.parser")
    hTypeName = bsObj.find_all("p",{"class":"tiaojian"})
    str_Type = ""
    for temp in hTypeName:
        infotype = temp.find_all("span", {"class": "fl"})
        infotype_1 = temp.find_all("span", {"class": "fr"})
        for n, r in zip(infotype, infotype_1):
            str_Type =str_Type + n.get_text() + " " + r.get_text() + "|"
    return str_Type
if __name__ == '__main__':
    start = datetime.datetime.now()
    print(start)
    fileName = "C:/Users/passerby/Desktop/Users/passerby/PycharmProjects/untitled/house.csv"
    for i in range(1,100):
        getHouseLink(i)
    print(pages.__len__())
    urlSet = getHouseInfoLink(pages)
    test = pd.DataFrame(columns=titles,data=info_lists)
    test.to_csv(fileName)
    end = datetime.datetime.now()
    print(end)
    useSeconds = (end - start).total_seconds()
    print(useSeconds)
