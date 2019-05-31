#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define MAX
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int A = 0;
//	int B = 0;
//	int count = 0;
//	scanf("%d%d%d%d", &a, &b, &A, &B);
//	while (A != a&&B != b)
//	{
//		if (A % 2 == 0 && B % 2 == 0)
//		{
//			A /= 2;
//			B /= 2;
//			count++;
//		}
//		else if (A % 2 != 0 && B % 2 != 0)
//		{
//			A = A - 1;
//			B = B - 1;
//			count++;
//		}
//		else
//		{
//			count = -1;
//			break;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int c1, c2, c3, c4, c5, c6;
//	int sum = 0;
//	scanf("%d%d%d%d%d%d%d", &c6, &c5, &c4, &c3, &c2, &c1, &sum);
//	int count = 0;
//	while (sum)
//	{
//		if (sum - 500 >= 0 && c1 != 0)
//		{
//			sum -= 500;
//			count++;
//			c1--;
//		}
//		else if (sum - 100 >= 0 && c2 != 0)
//		{
//			sum -= 100;
//			count++;
//			c2--;
//		}
//		else if (sum - 50 >= 0 && c3 != 0)
//		{
//			sum -= 50;
//			count++;
//			c3--;
//		}
//		else if (sum - 10 >= 0 && c4 != 0)
//		{
//			sum -= 10;
//			count++;
//			c4--;
//		}
//		else if (sum - 5 >= 0 && c5 != 0)
//		{
//			sum -= 5;
//			count++;
//			c5--;
//		}
//		else if (sum - 1 >= 0 && c6 != 0)
//		{
//			sum -= 1;
//			count++;
//			c6--;
//		}
//		else
//		{
//			printf("NOWAY");
//			break;
//		}
//	}
//	if (sum == 0)
//	{
//		printf("%d", count);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a[100] = { 0 };
//	int score = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	while (i<n-1)
//	{
//		score += a[i] * a[i + 1];
//		a[i + 1] = a[i] + a[i + 1];
//		i++;
//	}
//	printf("%d", score);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	long long n = 0;
//	int a[20] = { 0 };
//	long long temp = 0;
//	long long sum = 0;
//	long long x = 1;
//	scanf("ll%d", &n);
//	temp = n;
//	long long j = 0;
//	while (temp)
//	{
//		temp /= 10;
//		a[j + 1] = a[j] * 10 + 1;
//		j++;
//	}
//	while (j)
//	{
//		x = n / a[j];
//		if (x>9)
//		{
//			break;
//		}
//		n = n - x*a[j];
//		j--;
//		sum += x*(long long)pow(10, (double)j);
//	}
//	if (j != 0)
//	{
//		printf("-1");
//	}
//	else
//	{
//		printf("%lld", sum);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int j, i;
//	char a[100] = "0";
//	scanf("%s", a);
//	for ( i = 0; i < strlen(a); i++)
//	{
//		for ( j = 0; j < i; j++)
//		{
//			if (a[i] == a[j])
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%c", a[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[300] = "0";
//	int b[300] = { 0 };
//	gets(a);
//	int i = 0;
//	for (i = 0; i < strlen(a); i++)
//	{
//		if (b[a[i]] == 0)
//		{
//			b[a[i]]++;
//			printf("%c", a[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}
//void fun(int arr[],int n)
//{
//	int i = 0;
//	int temp = 0;
//	while (n - 1)
//	{
//		for (i = 0; i < n - 1; i++)
//		{
//			if (arr[i]>arr[i + 1])
//			{
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//		n--;
//	}
//}
//int main()
//{
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int count = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[i] = arr1[i];
//	}
//	fun(arr2,n);
//	for (i = 0; i < n; i++)
//	{
//		if (arr1[i] != arr2[i])
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	char arr[100] = "0";
//	scanf("%d", &n);
//	if (n >= 0)
//	{
//		while (n)
//		{
//			arr[i] = n % 10 + 48;
//			n /= 10;
//			i++;
//		}
//		for (int j = 0; j < i; j++)
//		{
//			int k = 0;
//			if (arr[j] != '0')
//			{
//				for ( k = j; k < i; k++)
//				{
//					printf("%c", arr[k]);
//				}
//			}
//			if (k == i)
//			{
//				break;
//			}
//		}
//	}
//	else
//	{
//		i = 1;
//		arr[0] = '-';
//		n = -n;
//		while (n)
//		{
//			arr[i] = n % 10 + 48;
//			n /= 10;
//			i++;
//		}
//		for (int j = 1; j < i; j++)
//		{
//			int k = 0;
//
//			if (arr[j] != '0')
//			{
//			
//				for (k = j - 1; k < i; k++)
//				{
//					printf("%c", arr[k]);
//				}
//			}
//			 if (k == i)
//			{
//				break;
//			}
//			else 
//			{
//				arr[j] = arr[j - 1];
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int N = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		N = N * 10 + n % 10;
//		n /= 10;
//	}
//	printf("%d", N);
//	system("pause");
//	return 0;
//}
int fun(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			break;
		}
	}
	if (i>sqrt(n))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i = 0;
	int j;
	int count = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 2; i <= 1000000; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			int temp = i;
			int sum = 0;
			while (temp)
			{
				sum = sum * 10 + temp % 10;
				temp /= 10;
			}
			if (sum != i&&fun(sum))
			{
				count++;
			}
		}
		if (n == count)
		{
			printf("%d", i);
			break;
		}
	}
	if (i == 1000001)
	{

		printf("%d", -1);
	}
	system("pause");
	return 0;
}
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//
//	system("pause");
//	return 0;
//}