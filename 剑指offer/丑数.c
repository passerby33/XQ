#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Min(int a, int b, int c)
{
	int x = a < b ? a : b;
	return x < c ? x : c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a[10000] = { 0 };
	a[0] = 1;
	int temp = 0;
	int j = 1;
	int x2 = 0, x3 = 0, x5 = 0;
	while (1)
	{
		temp=Min(a[x2]*2, a[x3]*3, a[x5]*5);
		a[j] = temp;
		if (temp == a[x2] * 2)
		{
			x2++;
		}
		if (temp == a[x3] * 3)
		{
			x3++;
		}
		if (temp == a[x5] * 5)
		{
			x5++;
		}
		if (n == j)
		{
			printf("%d", a[j-1]);
			break;
		}
		j++;
	}
	system("pause");
	return 0;
}