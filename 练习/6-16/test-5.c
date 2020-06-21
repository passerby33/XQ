#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void myputs(char* arr1)
//{
//	char arr2[100]="0";
//	char* p = arr2;
//	while (*arr1)
//	{
//		if (*arr1 == ' ')
//		{
//			*(p) = '%';
//			*(p+1) = '2';
//			*(p+1) = '0';
//		}
//		else
//		{
//			*p = *arr1;
//			p++;
//			arr1++;
//		}
//			
//	}
//	
//	puts(arr2);
//}
//int main()
//{
//	char arr1[100]="as d wa";
//	//gets(arr1);
//	myputs(arr1);
//	//puts( arr1);
//	system("pause");
//	return 0;
//
//}
//#include <assert.h>
//void replace(char *src)
//{
//	assert(src);
//	int OldLen = 0;                  //原字符串长度
//	int NewLen = 0;                  //新字符串长度
//	int BlackNum = 0;                //空格数量
//	int NewBack = 0;                 //新字符串尾部
//	int OldBack = 0;                 //原字符串尾部
//	while (src[OldLen] != '\0')
//	{
//		if (src[OldLen] == ' ')
//		{
//			BlackNum++;
//		}
//		OldLen++;
//	}
//	NewLen = OldLen + BlackNum * 2;
//	OldBack = OldLen - 1;
//	NewBack = NewLen - 1;
//	while (OldBack != 0)
//	{
//		if (src[OldBack] == ' ')
//		{
//			src[NewBack--] = '0';
//			src[NewBack--] = '2';
//			src[NewBack] = '%';
//		}
//		else
//		{
//			src[NewBack] = src[OldBack];
//		}
//		OldBack--;
//		NewBack--;
//	}
//}
//int main()
//{
//	char p[20] = "hello world !";
//	replace(p);
//	puts(p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char s[100] = "0";
//	char* p = s;
//	int a ;
//	gets(s);
//	a=getchar();
//	//gets(s);
//	*(p++) = a;
//	puts(s);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char s[100] = "0";
//	gets(s);
//	char* p = s;
//	int a = 0;
//	a = getchar();
//	while (*p)
//	{
//		if (*p == a)
//		{
//			*p = ' ';
//		}
//		else
//			p++;
//	}
//	puts(s);
//	system("pause");
//	return 0;
//}
//void fun(char a[])
//{
//	int oldlen = 0;
//	int newlen = 0;
//	int len = 0;
//	int old = 0;
//	int new = 0;
//	while (a[oldlen] != '\0')
//	{
//		if (a[oldlen] == ' ')
//		{
//			len++;
//		}
//		oldlen++;
//	}
//	newlen = oldlen + len * 2 ;
//	old = oldlen - 1;
//	new = newlen - 1;
//	while (old)
//	{
//		if (a[old] == ' ')
//		{
//			a[new--] = '0';
//			a[new--] = '2';
//			a[new] = '%';
//		}
//		else
//		{
//			a[new] = a[old];
//		}
//		old--;
//		new--;
//	}
//}
//int main()
//{
//	char a[100] = "0";
//	gets(a);
//	fun(a);
//	puts(a);
//	system("pause");
//	return 0;
//}
//char * delCh(char * str, char ch)
//{
//	int i, j;
//	if (str == NULL)
//	{
//		return NULL;
//	}
//	for (i = j = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] != ch)
//		{
//			str[j] = str[i];
//			j++;
//		}
//	}
//	str[j] = '\0';
//	return str;
//}
//int main()
//{
//	char str[64] = "hello hello hello";
//	char ch = 'l';
//	printf("%s\n", delCh(str, ch));
//	system("pause");
//	return 0;
//}
void delchar(char s[],char a)
{
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != a)
		{
			s[j] = s[i];
			j++;
		}
	}
	//s[j] = '\0';
}
int main()
{
	char s[100] = "0";
	gets(s);
	delchar(s, 'g');
	puts(s);
	system("pause");
	return 0;
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//}
//#include <stdlib.h>
//#include <stdio.h>
//
//int Num[10];
//
//int main()
//{
//	const int N = 256;
//	int i, j, index, flag, n;
//	for (i = 1; i < N; i++)
//	{
//		n = i * i;
//		index = 0;
//		flag = 0;
//		
//		while (n)
//		{
//
//			Num[index++] = n % 10;
//			n = n / 10;
//		}
//		判断其平方具有对称性质
//		for (j = 0; j <= index / 2; j++)
//		{
//			if (Num[j] != Num[index - j - 1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		具有对称性
//		if (flag == 0){
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//
