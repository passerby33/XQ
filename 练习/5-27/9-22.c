#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = 1, b = 1, c = 0;
	while (a < n){
		c = a + b;
		b = a;//b
		a = c;//a
	}
	if ((a - n)>(n - b))
	{
		printf("%d", n - b);
	}
	else{
		printf("%d", a - n);
	}
	system("pause");
	return 0;
}