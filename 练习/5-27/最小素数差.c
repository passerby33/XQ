#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool fun(int x)
{
	int i = 0;
	for (i = 2; i<x; i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;
	int min = 1000000;
	int i,temp;
	/*scanf("%d", &n);
	for (i = 2; i<(n / 2) ; i++)
	{
		if (fun(i) == true)
		{
			if (true == fun(n - i))
			{
				if (min>(n - i * 2))
				{
					temp = i;
					min = n - i * 2;
				}
			}
		}
	}*/
	while (scanf("%d", &n) != EOF)
	{
		for (i = n / 2; i != 1; i--)
		{
			if (fun(i) == true && fun(n - i) == true)
			{
				break;
			}
		}
		printf("%d\n%d\n", i, n - i);
	}
	system("pause");
	return 0;
}