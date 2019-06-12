#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n)
	{
		n = n &(n - 1);
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}