#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	printf("%d", (int)(x+0.5));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[200] = "0";
//	int b[200] = { 0 };
//	int count = 0;
//	int i, j, k;
//	gets(a);;
//	for ( i = 0; i < strlen(a); i++)
//	{
//		for ( j = 0; j < 128;j++)
//		if (a[i] == j)
//		{
//			b[j]++;
//		}
//	}
//	for (k = 0; k < 128; k++)
//	{
//		if (b[k] != 0)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b[100] = { 0 };
//	int i = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		b[i] = a % 10;
//		i++;
//		a /= 10;
//	}
//	for (int j = 0; j < i; j++)
//	{
//		printf("%d", b[j]);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a[1000] = "0";
//	gets(a);
//	for (int i = strlen(a) - 1; i >= 0; i--)
//	{
//		printf("%c", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[1000] = "0";
//	char b[1000] = "0";
//	int j = 0, i = 0, count = 0;
//	int k = 0;
//	gets(a);
//	for (i = strlen(a) - 1; i >= 0; i--)
//	{
//		if (a[i] == ' ')
//		{
//			j = i + 1;
//			while (a[j]!=' '&&a[j]!='\0')
//			{
//				b[k++] = a[j];
//				j++;
//			}
//			b[k++] = ' ';
//		}
//	}
//	for (i = 0; i < strlen(a); i++)
//	{
//		if (a[i] != ' ')
//		{
//			b[k++] = a[i];
//		}
//		else
//		{
//			break;
//		}
//	}
//	puts(b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[100] = "0";
//	int  b[200] = { 0 };
//	int i, j;
//	gets(a);
//	for (i = 0; i < strlen(a); i++)
//	{
//		for (j = 97; j < 123; j++)
//		{
//			if (a[i] == j);
//			b[j]++;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b[100] = { 0 };
//	int c[100] = { 0 };
//	int i = 0;
//	int num = 0;
//	int sum = 0;
//	int n = 1;
//	int m = 1;
//	scanf("%d", &a);
//	while (a)
//	{
//		b[i++] = a % 10;
//		a /= 10;
//	}
//	c[0] = b[0];
//	for (int j = 1; j < i; j++)
//	{
//			num = 0;
//		for (int k = 0 ; k < j; k++)
//		{
//			if (b[j] == b[k])
//			{
//				num = 1;
//				break;
//			}
//		}
//		if (num == 0)
//		{
//			c[m++] = b[j];
//		}
//	}
//	for (int j = 0; j < m; j++)
//	{
//		printf("%d", c[j]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a[10] = { 0 };
//	int sum = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (a[n % 10] == 0)
//		{
//			a[n % 10]++;
//			sum = sum * 10 + n % 10;
//		}
//		n /= 10;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	system("pause");
//	return 0;
//}int main()
//{
//	system("pause");
//	return 0;
//}