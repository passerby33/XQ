#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char s[100000];
//	char s1[100000];
//	int i, j;
//	int flag = 0;
//	int len1;
//	scanf("%s", s);
//	int len = strlen(s);
//	int k;
//
//	for (i = 2; i <= len; i++)
//	{
//		if (len%i == 0)
//		{
//
//			len1 = len / i;
//			for (j = 0; j<len1; j++)
//			{
//
//				k = j + len1;
//				while (k<len)
//				{
//					if (s[j] == s[k])
//						k += len1;
//					else
//					{
//						flag = 2;
//						break;
//					}
//				}
//				if (flag == 2)
//				{
//					break;
//				}
//			}
//			if (j == len1 || k >= len)
//			{
//		        strncpy(s1, s, len1);
//				s1[len1] = '\0';
//				printf("%s\n", s1);
//				system("pause");
//
//				return 0;
//			}
//		}
//	}
//	if (i == len + 1)
//	{
//		printf("false\n");
//		system("pause");
//		return 0;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[100];
//	gets(a);
//	char b[100];
//	int len = strlen(a);
//	int len1 = 0;
//	int i = 0, k = 1, j = 1;
//	int flag = 0;
//
//	for (i = 2; i <= len; i++)
//	{
//		flag = 0;
//		if (len%i == 0)
//		{
//			len1 = len / i;
//			for ( j = 0; j < len1; j++)
//			{
//				 k = j + len1;
//				while (k < len)
//				{
//					if (a[j] != a[k])
//					{
//						flag = 1;
//						break;
//					}
//					else
//					{
//						k += len1;
//					}
//				}
//				if (flag == 1)
//				{
//					break;
//				}
//			}
//		}
//		if (j == len1 || k >= len)
//		{
//			strncpy(b, a, len1);
//			b[len1] = '\0';
//			printf("%s", b);
//			system("pause");
//			return 0;
//		}
//	}
//	if (i == len + 1)
//	{
//		printf("flase");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[100];
//	char b[100];
//	gets(a);
//	gets(b);
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	int n = len2 - len1; 
//	int max = 0;
//	while (n+1)
//	{
//		
//		int count = n;
//		for (int i = 0; i < len1; i++)
//		{
//			if (a[i] == b[i+n])
//			{
//				count++;
//			}
//		}
//		if (max < count)
//		{
//			max = count;
//		}
//		n--;
//	}
//	printf("%d", len2-max);
//	system("pause");
//	return 0;
//}
//void fun1(int a[],int n)
//{
//	int temp = 0;
//	while (n)
//	{
//		for (int i = 0; i < n-1; i++)
//		{
//			if (a[i]>a[i + 1])
//			{
//				temp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = temp;
//			}
//		}
//		n--;
//	}
//}
//int main()
//{
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		b[i] = a[i];
//	}
//	fun1(b,n);
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (b[j] == a[i])
//		{
//			j++;
//		}
//	}
//	printf("%d", n - j);
//	system("pause");
//	return 0;
//}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i = 1;
		int num = 1;
		while (i < n)
		{
			while (1)
			{
				num += 1;
				int m = num;
				while ((m % 2) == 0)
				{
					m /= 2;
				}
				while ((m % 3) == 0)
				{
					m /= 3;
				}
				while ((m % 5) == 0)
				{
					m /= 5;
				}
				if (m == 1)
				{
					i++;
					break;
				}

			}
		}
		printf("%d\n", num);
	}
	system("pause");
	return 0;
}