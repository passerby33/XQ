#define _CRT_sECURE_NO_WARNINGs 1
#include <stdio.h>
#include <stdlib.h>
#define MAXsIZE 200
typedef struct
{
	char str[MAXsIZE];
	int length;
}list;
void init(list*l)
{
	l->length = 0;
}

void creat(list *s)
{
	char c;
	int i = 0;
	while ((c = getchar()) != '\n')
	{
		s->str[i++] = c;
	}
	s->str[i] = '\0';
	s->length = i;
	return;
}
void print(list *s, int i, list T)
{
	int k;
	if (i<1 || i>s->length + 1 || s->length + T.length >= MAXsIZE)
	{
		printf("can not insert\n");
		return;
	}
	for (k = s->length - 1; k >= i - 1; k--)
	{
		s->str[k + T.length] = s->str[k];
	}
	for (k = 0; k<T.length; k++)
	{
		s->str[k + i - 1] = T.str[k];
	}
	s->length += T.length;
	s->str[s->length] = '\0';
}
void del(list *s, int i, int len)
{
	int k;
	if (i<0 || i>s->length || i + len - 1>MAXsIZE)
	{
		printf("can not delete\n");
		return;
	}
	for (k = i - 1; k <= s->length - 1; k++)
	{
		s->str[k] = s->str[k + len];
	}
	s->length -= len;
	s->str[k] = '\0';
	return;
}
int find(list s, list t)
{
	int i = 0, j = 0;
	while (i<s.length&&j<t.length)
	{
		if (s.str[i] == t.str[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}

	}
	if (j >= t.length)
	{
		return (i - t.length);
	}
	else
	{
		return -1;
	}
}
int main()
{
	list a ={ "Hello,everyboby!My name is Bill,I`m nine years old ,I major in digital media technology is Shaanxi XueQian Normal University", 124 };
	list b;
	list m = { "Shaanxi", 7 };
	init(&b);
	del(&a, 37, 4);
	printf("删除年龄后的字符串：\n");
	puts(a.str);
	printf("请输入新的年龄：");
	creat(&b);
	print(&a, 37, b);
	printf("新的字符串为：\n");
	puts(a.str);
	int ret = find(a,m);
	if (ret == -1)
	{
		printf("没有相匹配的模式串\n");
	}
	else
	{
		printf("子串Shaanxi在主串中的位置为：%d", ret);
	}
	system("pause");
	return 0;
}
