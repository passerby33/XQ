#include <stdio.h>
#define M 100
int n = 3;
int x[] = { 0, 0, 0 };
int b = 50;
int arr[] = { 24, 50, 26 };
int arr1[] = { 0, 0, 0 };
int fun1(int t)
{
	int i;
	int sum = 0;
	static int sum1 = 0;


	for (i = 0; i <= t; i++)
	{
		if (x[i] == 1)
			sum += arr[i];
	}
	if (sum>b)
	{
		x[t] = 0;
		return 0;
	}

	else {
		if (sum1<sum)
		{
			for (i = 0; i <= t; i++)
			{
				if (x[i] == 1)  arr1[i] = 1;
				else arr1[i] = 0;
			}
		}
		return 1;
	}
}

int  fun2(int t)
{
	if (t < n)
		return 1;
	else return 0;
}
void fun3(int t)
{

	int i;

	if (t<n)
	{
		for (i = 0; i <= 1; i++)
		{
			x[t] = i;
			if (fun1(t) && fun2(t))
				fun3(t + 1);
		}
	}
}
int main()
{
	int i;
	int sum = 0;
	int sum2 = 0;
	fun3(0);
	for (i = 0; i<n; i++)
	{
		if (arr1[i] == 0)
			sum += arr[i];
	}
	if (sum>b)
	{
		printf("ÎŞ·½°¸");
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		if (arr1[i] == 1)
		{
			printf("%d ", arr[i]);
			sum2 += arr[i];
		}
	}
	printf("\n");
	printf("%d ", sum2);
	return 0;
}