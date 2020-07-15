#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	long long sum = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		sum = 1;
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;
//		}
//		printf("%lld\n", sum);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int temp = 1;
//	long long sum1 = 0;
//	long long sum2 = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		sum1 = 0;
//		sum2 = 0;
//		temp = 1;
//		for (i = 1; i <= n; i++)
//		{
//			/*if (i > 1)
//			{
//				temp = temp*i*(i - 1);
//				sum1 += temp;
//			}
//			else
//			{
//				temp = temp*i;
//				sum1 += temp;
//			}
//		}
//		temp = 1;
//		for (i = 2; i <= n; i+=2 )
//		{
//			temp = temp*i*(i-1);
//			sum2 += temp;*/
//			temp = temp*i;
//			if (i % 2 == 0)
//			{
//				sum2 += temp;
//			}
//			else
//			{
//				sum1 += temp;
//			}
//		}
//		printf("%lld %lld\n", sum1,sum2);
//	}
//	system("pause");
//	return 0;
////}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	getchar();
//	while (m--)
//	{
//		char str[50]="0";
//		int n = 0;
//		gets(str);
//		for (int i = 0; i<strlen(str); i++)
//		{
//			if (str[i] >= '0'&&str[i] <= '9')
//			{
//				printf("%d ", i + 1);
//			}
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int isrunnian(int year){
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int yearday(int year){
//	if (isrunnian(year))
//		return 366;
//	else
//		return 365;
//}
//
//void afternday(int year, int month, int day, int n){
//	int i;
//	n = n + day;
//	day = 0;//day¹éÁã
//
//	if (isrunnian(year))
//		m[1] = 29;
//	else
//		m[1] = 28;
//
//	for (i = month - 2; i >= 0; i--){
//		n += m[i];
//	}
//	month = 0;//month¹éÁã
//	while (n>yearday(year)){
//		n -= yearday(year);
//		year++;
//	}
//
//	if (isrunnian(year))
//		m[1] = 29;
//	else
//		m[1] = 28;
//
//	i = 0;
//	while (n>m[i]){
//		n -= m[i];
//		month++;
//		i++;
//	}
//	month++;
//	day = n;
//	printf("%d-%02d-%02d\n", year, month, day);
//
//}
//
//int main(){
//	int n, i;
//	int year, month, day, plus;
//	while ((scanf("%d", &n)) != EOF){
//		for (i = 0; i<n; i++) {
//			scanf("%d%d%d%d", &year, &month, &day, &plus);
//			afternday(year, month, day, plus);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int x1 = 0;
//	int y1 = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d%d%d%d", &x, &y, &x1, &y1);
//		double len = sqrt(pow(x - x1, 2) + pow(y - y1, 2));
//		printf("%.2f\n", len);
//	}
//	system("pause");
//	return 0;
//}
//typedef struct str
//{
//	int n;
//	char name[20];
//	char gender[10];
//	int age;
//}init;
//int main()
//{
//	init a[100] = { 1, "ÕÅÈý", "ÄÐ", 20 };
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	while (scanf("%d", &y) != EOF)
//	{
//		for (int i = 0; i < y; i++)
//		{
//			scanf("%d %s %s %d", &a[i].n, a[i].gender, a[i].name, &a[i].age);
//		}
//		int k = 0;
//		scanf("%d", &k);
//			for (int i = 0; i <= y; i++)
//			{
//				if (k == a[i].n)
//				{
//					printf("%d %s %s %d\n", a[i].n, a[i].gender, a[i].name, a[i].age);
//					break;
//				}
//			}
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//	int num = 0, s[200] = { 0 };
//	for (int i = 0; i < 6; i++)
//	{
//
//		for (int j = 0; j < 5; j++)
//		{
//			for (int k = 0; k < 7; k++)
//			{
//				s[i * 8 + j * 10 + k * 18]++;
//			}
//		}
//	}
//	for (int i = 1; i < 200; i++)
//	{
//		if (s[i]) num++;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d%d%d%d", &a, &b, &c, &d);
//
//		a = a + c;
//		b = b + d;
//		if (b < 0)
//		{
//			if (a == 0)
//			{
//				printf("%di\n", b);
//			}
//			else
//				printf("%d%di\n", a, b);
//		}
//		else if (b>0)
//		{
//			if (a == 0)
//			{
//				printf("%di\n", b);
//			}
//			else
//			{
//				printf("%d+%di\n", a, b);
//			}
//		}
//		else
//		{
//			printf("%d\n", a);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	scanf("%d%d", &n,&m);
//	while (n||m)
//	{
//		if ((n & 1) != (m & 1))
//		{
//			count++;
//		}
//		n = n >> 1;
//		m = m >> 1;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int count=0;
//	scanf("%d%d", &i,&j);
//	if (i > j)
//	{
//		printf("%d", -1);
//	}
//	else
//	{
//		for (k = i; k <= j; k++)
//		{
//			int x = k;
//			while (x)
//			{
//				if (x % 10 == 6 || x % 10 == 8)
//				{
//					x /= 10;
//				}
//				else
//				{
//					break;
//				}
//			}
//			if (x == 0)
//			{
//				count++;
//			}
//		}
//		printf("%d", count);
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int j = 0;
	int n = 0;
	int max1 = 0, max2 = 0, max3 = 0;
	scanf("%d", &j);
	scanf("%d%d%d", &max1, &max2, &max3);
	for (int i = 3; i < j; i++)
	{
		scanf("%d", &n);
		if (n>max1)
		{
			max1 = n;
		}
		else
		{
			if (n > max2)
			{
				max2 = n;
			}
			else
			{
				if (n > max3)
				{
					max3 = n;
				}
			}
		}
	}
	printf("%d", max1*max2*max3);
	system("pause");
	return 0;
}