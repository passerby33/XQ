//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>
////int fun(int a)
////{
////	int count = 0;
////	int i = 1;
////	while (i<=sqrt(a))
////	{
////		if (a%i == 0)
////		{
////			if (i == sqrt(a))
////			{
////				count++;
////			}
////			else
////			{
////				count += 2;
////			}
////		}
////		i++;
////	}
////	return count;
////}
////int main()
////{
////	int a = 0;
////	int sz = 0;
////	int i = 0;
////	scanf("%d", &sz);
////	for (i = 0; i < sz; i++)
////	{
////		scanf("%d", &a);
////		printf("%d ", fun(a));
////	}
////	system("pause");
////	return 0;
////}
////int main()
////{
////	char arr[10];
////	gets(arr);
////	int ret = strlen(arr);
////	int count = 0;
////	int i = 0;
////	int j = 0;
////	int k = 0;
////	char* p = arr;
////	while (*p)
////	{
////		if (*p >= '1'&&*p <= '9')
////		{
////			count++;
////		}
////		else if (*p >= 'a'&&*p <= 'z'||*p >= 'A'&&*p <= 'Z')
////		{
////			i++;
////		}
////		else if (*p == ' ')
////		{
////			j++;
////		}
////		else 
////		{
////			k++;
////		}
////		p++;
////	}
////	printf("%d %d %d %d", count, i, j, k);
////	system("pause");
////	return 0;
////}
//int main()
//{
//	char arr[20];
//	gets(arr);
//	char *p = arr;
//	while (*p)
//	{
//		if (*p == ' ')
//			*p = "%20";
//	}
//	puts(arr);
//	system("pause");
//	return 0;
//}
