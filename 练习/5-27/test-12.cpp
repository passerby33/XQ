#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//
//#define M 100
//int n = 3;
//int x[] = { 0, 0, 0 };
//int b = 50;
//int arr[] = { 24, 50, 26 };
//int arr1[] = { 0, 0, 0 };
//int fun1(int t)
//{
//	int i;
//	int sum = 0;
//	static int sum1 = 0;
//
//
//	for (i = 0; i <= t; i++)
//	{
//		if (x[i] == 1)
//			sum += arr[i];
//	}
//	if (sum>b)
//	{
//		x[t] = 0;
//		return 0;
//	}
//
//	else {
//		if (sum1<sum)
//		{
//			for (i = 0; i <= t; i++)
//			{
//				if (x[i] == 1)  arr1[i] = 1;
//				else arr1[i] = 0;
//			}
//		}
//		return 1;
//	}
//}
//
//int  fun2(int t)
//{
//	if (t < n)
//		return 1;
//	else return 0;
//}
//void fun3(int t)
//{
//
//	int i;
//
//	if (t<n)
//	{
//		for (i = 0; i <= 1; i++)
//		{
//			x[t] = i;
//			if (fun1(t) && fun2(t))
//				fun3(t + 1);
//		}
//	}
//}
//int main()
//{
//	int i;
//	int sum = 0;
//	int sum2 = 0;
//	fun3(0);
//	for (i = 0; i<n; i++)
//	{
//		if (arr1[i] == 0)
//			sum += arr[i];
//	}
//	if (sum>b)
//	{
//		printf("ÎÞ·½°¸");
//		return 0;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] == 1)
//		{
//			printf("%d ", arr[i]);
//			sum2 += arr[i];
//		}
//	}
//	printf("\n");
//	printf("%d ", sum2);
//	system("pause");
//	return 0;
////}
//int main()
//{
//	int max = 0;
//	scanf("%d", &max);
//	int i = 0;
//	int a[100000] = { 0 };
//	int m = 0;
//	for (i = 0; i < max; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	while (i)
//	{
//		for (int k = 0; k < i-1; k++)
//		{
//			if (a[k]>a[k + 1])
//			{
//				m = a[k];
//				a[k] = a[k + 1];
//				a[k + 1] = m;
//			}
//		}
//		i--;
//	}
//	for (i = 0; i < max-1; i++)
//	{
//		int k = 0;
//		for ( k = i + 1; k < max; k++)
//		{
//			if (a[i] == 0)
//			{
//				break;
//			}
//			if (a[k] % a[i] == 0)
//			{
//				break;
//			}
//		}
//		if (k == max)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	printf("%d\n", a[max - 1]);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[100000] = "0";
//	int count = 0;
//	scanf("%s", a);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i]!= a[i + 1])
//		{
//			count++;
//		}
//	}
//	printf("%d", strlen(a) - count+1);
//	system("pause");
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int len = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &len);
//	for (i = 0; i < len;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	while (k<len-1-2)
//	{
//		if (arr[0] == arr[1] == arr[2] == 0)
//		{
//			count++;
//			k = 2;
//			arr[k] = 1;
//		}
//		if (arr[k] == 1)
//		{
//			if (arr[k + 1] == arr[k + 2] == arr[k + 3]==0)
//			{
//				count++;
//				k = k + 2;
//				arr[k] = 1;
//			}
//		}
//		else
//		{
//			k++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
int fun(int a, int b)
{
	return a < b ? a : b;
	
}
int main()
{
	int n = 0;
	int t = 0;
	int a = 0;
	scanf("%d%d%d", &n, &t, &a);
	/*if (t <= a)
	{
		if (n - t <= n - a)
			printf("%d", t + n - t);
		else
			printf("%d", t + n - a);
	}
	else
	{
		if (n - t <= n - a)
			printf("%d", a + n - t);
		else
			printf("%d", a + n - a);
	}*/
	printf("%d", fun(t, a) + fun(n - t, n - a));
	system("pause");
	return 0;
}