#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n = 0;
	int max = 0;
	int count = 0;
	while (scanf("%d", &n) != EOF)
	{
		while (n)
		{
			if (n & 1 == 1)
			{
				count++;
			}
			else
			{
				if (count > max)
				{
					max = count;
				}
				count = 0;
			}
			n >>= 1;
		}
		if (count > max)
			max = count;
		printf("%d\n", max);
	}
	return 0;
}