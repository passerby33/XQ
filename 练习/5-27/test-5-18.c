#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int count = 0;
//	int a = value;
//	while (a >> 1)
//	{
//		count++;
//	}
//	count++;
//	return value << (32 - count);
//}
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int bit = 0;
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum << 1;
//		bit = value & 1;
//		sum = sum | bit;
//		value = value >> 1;
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int value = 0;
//	scanf("%u", &value);
//	printf("%u", reverse_bit(value));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", (a&b) + ((a^b) >> 1));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[10] = { 3, 4, 5, 1, 3, 4, 5 };
//	int i = 0;
//	for (i = 1; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		a[0] = a[0] ^ a[i];
//	}
//	printf("%d\n", a[0]);
//	system("pause");
//	return 0;
//}
//void reveser_ch(char *left, char *right)
//{
//	char temp = 0;
//	while (left < right)
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//char *reveser(char ch[])
//{
//	int len = strlen(ch);
//	char *arr = ch;
//	char* left = ch;
//	char* right = ch + len - 1;
//	reveser_ch(left, right);
//	while (*ch)
//	{
//		left = ch;
//		while (*ch != ' '&&*ch!='\0')
//		{
//			ch++;
//		}
//		reveser_ch(left, ch-1);
//		while (*ch == ' ')
//		{
//			ch++;
//		}
//	}
//	return arr;
//}
//int main()
//{
//	char ch[] = "1";
//	gets(ch);
//	printf("%s", reveser(ch));
//	system("pause");
//	return 0;
//}
void fun(int arr[],int len)
{
	int i = 0;
	int j = len - 1;
	int temp = 0;
	while (i<j)
	{
		if (arr[i] % 2 == 0 &&arr[j]% 2 == 1)
		{
			temp =arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		if (arr[i] % 2 == 1)
		{
			i++;
		}
		if (arr[j] % 2 == 0)
		{
			j--;
		}
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	fun(arr,len);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9, } };
	int n = 0;
	int i = 0;
	int j = 0;
	int flag = 0;
	while (scanf("%d", &n) != EOF)
	{
		flag = 0;
		for (i = 0, j = 2; i < 3; i++)
		{
			if (n <= arr[i][j])
			{
				for (; j >= 0; j--)
				{
					if (n == arr[i][j])
					{
						flag = 1;
						printf("´æÔÚ\n");
						break;
					}
				}
			}
			if (flag==1)
			{
				break;
			}
		}
		if (i == 3)
		{
			printf("²»´æÔÚ\n");
		}
	}
	system("pause");
	return 0;
}


