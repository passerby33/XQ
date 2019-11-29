#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#if 0
void fun(int n, int r)
{
	if (n < r)
	{
		printf("%d", n);
	}
	else{
		fun(n/r, r);
		printf("%d", n%r);
	}
}
int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	fun(a, b);
	printf("\n");
	system("pause");
	return 0;
}

int main()
{
	int n = 0;
	int x = 1, y = 1;
	int z = 1;
	scanf("%d", &n);
	if (n == 1 )
	{
		printf("%d", x);
	}
	else{
		for (int i = 0; i < n - 1; i++)
		{
			z = x + y;
			x = y;
			y = z;
		}
		printf("%d\n", z);
	}
	system("pause");
	return 0;
}

void fun(int *a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = 0;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int a[100] = { 0 };
	int n, k,count=1;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	fun(a, n);
	int min = a[0],i=1;
	while (count < k)
	{
		if (min<a[i])
		{
			min = a[i];
			count++;
		}
		i++;
	}
	printf("%d", min);
	system("pause");
	return 0;
}


int main()
{
	int a[200] = { 0 };
	a['i'] = 1;
	a['v'] = 5;
	a['x'] = 10;
	a['l'] = 50;
	a['c'] = 100;
	a['d'] = 500;
	a['m'] = 1000;
	char b[1000] ;
	int sum = 0;
	scanf("%s", b);
	int len = strlen(b);
	for (int i = 0; i < len; i++)
	{
		if (a[b[i]]>=a[b[i + 1]])
		{
			sum += a[b[i]];
		}
		else
		{
			sum += a[b[i + 1]] - a[b[i]];
			i++;
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
#endif
int main()
{
	int n = 484;
	int sum = 0;
	for (int i = 1; sum < n; i += 2)
	{
		sum += i;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}