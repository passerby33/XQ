#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char a[100] = "0";
//	int num = 0;
//	gets(a);
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++)
//	{
//		printf("%s", a);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a[100] = "0";
//	int num = 0;
//		scanf("%s%d", a, &num);
//	for (int i = 0; i < num; i++)
//	{
//		printf("%s", a);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a1[100] = "0";
//	char a2[100] = "0";
//	int c[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	scanf("%s%s", a1, a2);
//	if (a2[0] == '\0')
//	{
//		printf("Yes");
//	}
//	for (i = 0; i < strlen(a2); i++)                                  
//	{
//		for (j = 0; j < strlen(a1); j++)            
//		{
//			if (c[j] == 0)
//			{
//				if (a2[i] == a1[j])
//				{
//				    c[j]++;
//					break; 
//				}
//			}
//		}
//		if (j == strlen(a1))
//		{
//			printf("no");
//			break;
//		}
//	}
//	if (i == strlen(a2))
//	{
//		printf("yes");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a1[100] = "0";
//	char a2[100] = "0";
//	int c[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	scanf("%s%s", a1, a2);
//	for (i = 0; i < strlen(a2); i++)
//	{
//		for (j = num; j < strlen(a1); j++)
//		{
//			if (a2[i] == a1[j])
//			{
//				num = j + 1;
//				break;
//			}
//		}
//		if (j == strlen(a1))
//		{
//			printf("No");
//			break;
//		}
//	}
//	if (i == strlen(a2))
//	{
//		printf("Yes");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 6 || n == 8 || (n >= 14 && (n % 2 == 0)))
//	{
//		if (n % 8 == 0)
//		{
//			printf("%d", n / 8);
//		}
//		else
//		{
//			printf("%d", n / 8 + 1);
//		}
//
//	}
//	else
//		printf("%d", -1);
//	system("pause");
//	return 0;
//}
//int sushu(int n, int a[])
//{
//	int i;
//	int j = 0;
//	while (n > 1)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n%i == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			a[j++] = i;
//		}
//		n--;
//	}
//	return j;
//}
//int main()
//{
//	int n = 0;
//	int a[1000] = { 0 };
//	int count = 0;
//	scanf("%d", &n);
//	int ret = sushu(n, a);
//	for (int i = 0; i < ret; i++)
//	{
//		for (int j = i ; j < ret; j++)
//		{
//			if (a[i] + a[j] == n)
//				count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//分苹果
//int main()
//{
//	int n = 0;
//	int a[100] = { 0 };
//	int sum = 0;
//	int count = 0;
//	int count1 = 0;
//	int count2 = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] % 2 == 0)
//		{
//			count1++;
//		}
//		else if (a[i] % 2 == 1)
//		{
//			count2++;
//		}
//		sum += a[i];
//	}
//	if ((count1 == n || count2 == n) && (sum%n == 0))
//	{
//		int k = sum / n;
//		int b[100] = { 0 };
//		int x = 0, y = n - 1;
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] < k)
//			{
//				b[x++] = a[i];
//			}
//			else
//			{
//				b[y--] = a[i];
//			}
//		}
//		int max = x;
//		int min = 0;
//		{ 
//			if (b[max] == k)
//			{
//				max++;
//			}
//		
//		}
//				while (1)
//				{
//					b[max] = b[max] - 2;
//					b[min] = b[min] + 2;
//					count++;
//					if (b[max] == k&&b[min] == k)
//					{
//						max++;
//						min++;
//					}
//					if (b[max] == k)
//					{
//						max++;
//					}
//					if (b[min] == k)
//					{
//						min++;
//					}
//					if (max == n)
//					{
//						break;
//					}
//				}
//			
//		printf("%d", count);
//	}
//	else
//	{
//		printf("%d", -1);
//	}
//	system("pause");
//	return 0;
//}
//优化后
//int main()
//{
//	int n = 0;
//	int a[100] = { 0 };
//	int sum = 0;
//	int x = 0;
//	int count = 0;
//	int count1 = 0;
//	int count2 = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] % 2 == 0)
//		{
//			count1++;
//		}
//		else if (a[i] % 2 == 1)
//		{
//			count2++;
//		}
//		sum += a[i];
//	}
//	if ((count1 == n || count2 == n) && (sum%n == 0))
//	{
//		int k = sum / n;
//		int b[100] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] < k)
//			{
//				b[x++] = a[i];
//			}
//		}
//		int max = 0;
//		while (max != x)
//		{
//			b[max] += 2;
//			count++;
//			if (b[max] == k)
//			{
//				max++;
//			}
//		}
//		printf("%d", count);
//	}
//	else
//	{
//		printf("%d", -1);
//	}
//	system("pause");
//	return 0;
////}
//int main()
//{
//	char arr[10] = "0";
//	int a = 0, b = 0;
//	gets(a);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int x = 0;
//	scanf("%d", &x);
//	for (int i = 0; i<x; i++)
//	{
//		scanf("%d", &n);
//		sum = 0;
//		if (n > 0)
//		{
//			for (int i = n; i <= 2 * n; i++)
//			{
//				sum += i;
//			}
//			printf("%d\n", sum);
//		}
//		else
//		{
//			n = -n;
//			for (int i = n; i <= 2 * n; i++)
//			{
//				sum -= i;
//			}
//			printf("%d\n", sum);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	long long sum = 1;
//	int x = 0;
//	scanf("%d", &x);
//	for (int i = 0; i < x; i++)
//	{
//		scanf("%d", &n);
//		sum = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			sum *= j;
//		}
//		printf("%lld\n", sum);
//	}
//	system("pause");
//	return 0;
//}
int fun(int max, int min)
{
	int temp = 0;
	while (min)
	{
		temp = max%min;
		max = min;
		min = temp;
	}
	return max;
}
int main()
{
	int x = 0;
	int a[100] = { 0 };
	int max, min ;
	
	
		while(scanf("%d", &x)!=EOF)
		{
		for (int i = 0; i < x; i++)
		{
			scanf("%d", &a[i]);
			if (i == 0)
			{
				max = a[0];
				min = a[0];
			}
			if (a[i]>max)
			{
				max = a[i];
			}
			if (a[i] < min)
			{
				min = a[i];
			}
		}
		printf("%d %d %d\n", min, max, fun(max, min));
	}
	system("pause");
	return 0;
}
//int fun(int max, int min)
//{
//	int temp = 0;
//	while (min)
//	{
//		temp = max%min;
//		max = min;
//		min = temp;
//	}
//	return max;
//}
//int main()
//{
//	int a=0, b=0;
//	scanf("%d%d", &a, &b);
//	printf("%d", fun(a,b));
//	system("pause");
//	return 0;
//}
