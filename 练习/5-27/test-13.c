#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[100] = { 0 };
	int len = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &len);
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	int n = 0;
	scanf("%d", &n);
	int k = 0;
	while (k<len - 1 - 2)
	{
		if (arr[0] == arr[1] == arr[2]&&arr[1]==0)
		{
			count++;
			k = 2;
			arr[k] = 1;
		}
		if (arr[k] == 1)
		{
			if (arr[k + 1] == arr[k + 2] == arr[k + 3] &&arr[k+2]==0)
			{
				count++;
				k = k + 2;
				arr[k] = 1;
			}
			else
			{
				k++;
			}
		}
		else
		{
			k++;
		}
	}
	if (n <= count)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	system("pause");
	return 0;
}