#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fun2(char* a, char* b)
{
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 != len2)
	{
		return 0;
	}
	else
	{
		/*for (int i = 1; i <= len1; i++)
		{
			char temp = a[0];
			int j;
			for ( j = 0; j < len1-1; j++)
			{
				a[j] = a[j + 1];
			}
			a[j] = temp;
			if (0 == strcmp(a, b))
			{
				return 1;
			}
		}
		return 0;*/
		char temp[20];
		strcpy(temp, a);
		strcat(temp, a);
		char* p=strstr(temp, b);
		if (p != NULL)
		{
			return 1;
		}
		else
			return 0;
		//strstr()
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
	char a[20] = "1234abcd";
	char b[10] = "abcd1234";
	int n = 0;
	scanf("%d", &n);
	char* ret = fun(a, n);
	printf("%s\n", ret);
	printf("%d", fun2(a,b));
	system("pause");
	return 0;
	
}

