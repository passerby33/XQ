#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int fun2(char* a, char* b)
{
	char *p1 = a;
	char *p2 = b;
	while (*p2)
	{
		p2++;
	}
	p2--;
	while (*p1)
	{
		if (*p1 == *p2)
		{
			p1++;
			p2--;
		}
		else
		{
			p2 = b;
			while (*p1)
			{
				if (*p1 != *p2)
				{
					printf("²»ÊÇ");
					break;
				}
			}
			if
		}
	}

}
char* fun(char *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		char temp = a[0];
		{
			char *p = &a[0];
			char *p1 = &a[1];
			while (*p1)
			{
				*p++ = *p1++;
			}
			*p = temp;
		}
	}
	return a;
}
int main()
{
	char a[10] = "1234abcd";
	int n = 0;
	scanf("%d", &n);
	char* ret=fun(a, n);
	printf("%s", ret);
	system("pause");
	return 0;
}
