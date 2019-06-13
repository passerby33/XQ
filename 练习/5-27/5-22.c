//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
////int main()
////{
////	int n = 0;
////	int sum = 0;
////	int i = 1;
////	int j = 1;
////	scanf("%d", &n);
////	while (i*3<n||j*5<n)
////	{
////		if (i * 3 < n)
////		{
////			sum += i * 3;
////			i++;
////		}
////		if (j * 5 < n)
////		{
////			sum += j * 5;
////			j++;
////		}
////	}
////	printf("%d", sum);
////	system("pause");
////	return 0;
////}
////int fun(int n,int sum)
////{
////	//while (n)
////	//{
////	//	sum = sum * 10 + n % 10;
////	//	n /= 10;
////	//}
////	//return sum;
////	if ((n < 10&& n > 0)||(n < 0&& n> -10)||(n==0))
////	{
////		return sum+n;
////	}
////	else
////	{
////		sum += n % 10;
////		fun(n / 10, sum * 10);
////	}
////}
////int main()
////{
////	int n = 0;
////	int sum = 0;
////	scanf("%d", &n);
////	printf("%d", fun(n,sum));
////	system("pause");
////	return 0;
////}
//int Max(int *a, int n)
//{
//	int temp = 0;
//	int max1 = *a;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i]>max1)
//		{
//			max1 = a[i];
//		}
//	}
//	return max1;
//}
//int Max_2(int *a, int n)
//{
//	int temp = 0;
//	int max1 = *a;
//	int max2 = *a;
//	for (int i = 0; i < n; i++)
//	{
//		if (max2 < a[i])
//		{
//			if (max1 < a[i])
//			{
//				max2 = max1;
//				max1 = a[i];
//			}
//			else
//			{
//				max2 = a[i];
//			}
//		}
//	}
//	return max2;
//}
//void swap(int *a,int n)
//{
//	int i = 0;
//	int j = n - 1;
//	int temp = 0;
//	while (i < j)
//	{
//		temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[10] = { 77, 4, 7, 2, 5, 99, 3, 6, 66, 10 };
//	printf("最大数：%d \n", Max(arr, 10));
//	printf("第二大数：%d\n", Max_2(arr, 10));
//	swap(arr, 10);
//	for (int i = 0; i < 10; i++/*)*/
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}