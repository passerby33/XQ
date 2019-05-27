#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int a[100] = { 0 };
//	int flag = 0;
//	for (i = 1; i < 256; i++)
//	{
//		num = i*i;
//		int j = 0;
//		int k = 0;
//        flag = 0;
//		while (num)
//		{
//			a[j] = num % 10;
//			num /= 10;
//			j++;
//		}
//		for (k = 0; k < j / 2; k++)
//		{
//			if (a[k] != a[j - k - 1])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i*i);
//		}
//	}
//	system("pause");
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	int temp = 0;
//	int x = 0;
//	for (i = 1; i < 256; i++)
//	{
//		num = i*i;
//		x = 0;
//		while (num)
//		{
//			temp = num % 10;
//			x = x * 10 + temp;
//			num = num / 10;
//		}
//		if (x == i*i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a, b, c;
//	int temp = 0;
//	/*for (i = 100; i < 433; i++)
//	{
//		temp = i;
//		c = temp % 10;
//		b = (temp / 10) % 10;
//		a = temp / 100;
//		if (i + b * 100 + c * 10 + c == 532)
//		{
//			printf("%d %d %d\n", a, b, c);
//		}
//	}*/
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//			for (c = 0; c < 10; c++)
//			{
//				if (a * 100 + b * 10 + c + b * 100 + c * 10 + 1 == 532)
//					printf("%d %d %d", a, b, c);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	
//}
//int main(){
//	int i, n, m;
//	for (i = 0; i<256; i++) {
//		n = i * i;  //i平方
//		m = 0;
//		while (n) {
//			m = m * 10 + n % 10;  //将i*i的积取反，如10*10=100，将100取反是001
//			n = n / 10;
//		}
//		if (m == i*i)    //i*i的积 与 取反的数 ，如果相同就是对称平方数
//			printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
////}
//int main()
//{
//	char a[1000] = "0";
//	unsigned int i = 0;
//	int count = 0;
//	int  b = 0;
//	gets(a);
//	b=getchar();
//	for (i = 0; i < strlen(a); i++)
//	{
//		if (b >= 'a' && b <= 'z')
//		{
//			if (a[i] == b || a[i] == b - 32)
//				count++;
//		}
//		if (b >= 'A' && b <= 'Z')
//		{
//			if (a[i] == b || a[i] == b + 32)
//				count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//
////}
//int main()
//{
//	int a, b, c, d;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			for (c = 0; c < 10; c++)
//			{
//				for (d = 0; d < 10; d++)
//				{
//					if ((a * 1000 + b * 100 + c * 10 + d) * 9 == (d * 1000 + c * 100 + b * 10 + a))
//						printf("%d\n", a * 1000 + b * 100 + c * 10 + d);
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int H = 0;
//	int i = 0;
//	int x = 0;
//	double sum = 0;
//	scanf("%d", &x);
//	for (i = 0; i < x; i++)
//	{
//		sum = 0;
//		scanf("%d%d", &H, &n);
//		while (n)
//		{
//			sum += H + H / 2;
//			H = H / 2;
//			n--;
//		}
//		printf("%.2f", sum);
//	}
//	system("pause");
//	return 0;
////}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	scanf("%d", &x);
//	for (int i = 0; i < x; i++)
//	{
//		scanf("%d", &y);
//		count = 0;
//		for (int j = 1; j <= sqrt(y); j++)
//		{
//			if (y%j == 0)
//			{
//				count += 2;
//				if (j == sqrt(y))
//				{
//					count--;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int max, min;
//	int num = 0;
//	int a[1000] = { 0 };
//	while (scanf("%d", &num) != EOF)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		max = a[0];
//		min = a[0];
//		for (int i = 0; i < num; i++)
//		{
//			if (a[i]>max)
//			{
//				max = a[i];
//			}
//			else if(a[i] < min)
//			{
//				min = a[i];
//			}
//		}
//		printf("%d %d\n", max, min);
//	}
//	system("pause");
//	return 0;
//}
//void fun(char a[])
//{
//	if (strlen(a) == 8)
//		puts(a);
//	else if (strlen(a) < 8)
//	{
//		int new = 0;
//		int old = strlen(a);
//		for (int i = 0,new=0; i < 8; i++)
//		{
//			if (i < old)
//			{
//				a[new] = a[i];
//				new++;
//			}
//			else
//			{
//				a[new] = '0';
//				new++;
//			}
//		}
//		puts(a);
//	}
//	else if (strlen(a) > 8)
//	{
//		char a1[100] = "0";
//		int new = 0;
//		int j = 0;
//		int old = strlen(a);
//		for (int i = 0; i < old; i++)
//		{
//			if (i < 8)
//			{
//				a[new] = a[i];
//				new++;
//			}
//			else
//			{
//				a1[j] = a[i];
//				j++;
//			}
//		}
//		a[new] = '\0';
//		for (int i = strlen(a1); i < 8; i++)
//		{
//			a1[i] = '0';
//		}
//		puts(a);
//		puts(a1);
//	}
//}
//int main()
//{
//	char a[100] = "0";
//	char b[100] = "0";
//	gets(a);
//	gets(b);
//	fun(a);
//	fun(b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[100] = "0";
//	while (gets(a))
//	{
//		for (int i = 0; i < strlen(a); i++)
//		{
//			if ((i + 1) % 8 == 0)
//			{
//				printf("%c\n", a[i]);
//			}
//			else
//			{
//				printf("%c", a[i]);
//			}
//		}
//		if (strlen(a) % 8 != 0)
//		{
//			for (int i = 0; i < 8 - strlen(a) % 8; i++)
//			{
//				printf("0");
//			}
//			printf("\n");
//		}
//	}
//		system("pause");
//		return 0;
//}
//int main()
//{
//	int n = 1;
//	while (scanf("%d", &n)&&n!=0)
//	{
//		/*if (n == 0)
//		{
//			break;
//		}*/
//		printf("%d\n", n / 2);
//		/*int m;
//		int x;
//		int count = 0;
//		while (n)
//		{
//			m = n / 3;
//			x = n % 3;
//			count = count + m;
//			n = m + x;
//			if (n == 1)
//			{
//				printf("%d\n", count);
//				break;
//			}
//			else if (n == 2)
//			{
//				printf("%d\n", count + 1);
//				break;
//			}
//		}*/
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int m = 1;
//	int n = 1;
//	int fk;
//	for (int i = 2; i < num; i++)
//	{
//		fk = m + n;
//		m = n;
//		n = fk;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[10] = {  2, 3, 4 };
//}
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int sum = 0;
	while (scanf("%d%d%d", &year, &month, &day) != EOF)
	{
		switch (month - 1)
		{
		case 0:sum = day;
			break;
		case 1: sum = 31 + day;
			break;
		case 2: sum = 31 + 28 + day;
			break;
		case 3:sum = 31 + 28 + 31 + day;
			break;
		case 4:sum = 31 + 28 + 31 + 30 + day;
			break;
		case 5:sum = 31 + 28 + 31 + 30 + 31 + day;
			break;
		case 6:sum = 31 + 28 + 31 + 30 + 31 + 30 + day;
			break;
		case 7:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
			break;
		case 8:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			break;
		case 9:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
			break;
		case 10:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
			break;
		case 11:sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
			break;
		default:
			break;
		}
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			if (month > 2)
			{
				printf("%d\n", sum + 1);
			}
			else
			{
				printf("%d\n", sum);
			}
		}
		else
		{
			printf("%d\n", sum);
		}
	}
	system("pause");
	return 0;
}

