'''
while(1):
    print("*****1.加法*****\n")
    print("*****2.减法*****\n")
    print("*****3.乘法*****\n")
    print("*****4.除法*****\n")
    x=int(input("请选择："))
    a=int(input())
    b=int(input())
    if x==1:
        print(a+b)
    if x==2:
        print(a-b)
    if x==3:
        print(a*b)
    if x==4:
        print(a/b)

count=0
x=int(input())
while(x!=0):
    x=x&(x-1)
    count+=1
print(count)
'''
