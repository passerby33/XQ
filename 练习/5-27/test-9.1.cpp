#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define max 100
typedef int datatype;
typedef struct list
{
	datatype a[max];
	int size;
}list;
void init(list *l)
{
	l->size = 0;
}
void function(list *l, list *r)
{
	datatype i, j;
	for (i = 0; i<r->size; i++)
	{
		for (j = l->size - 1; j >= 0; j--)
		{
			if (r->a[i]<l->a[j])
			{
				l->a[j + 1] = l->a[j];
				if (j == 0)
				{
					l->a[0] = r->a[i];
				}
			}
			else if (r->a[i] >= l->a[j])
			{
				l->a[j + 1] = r->a[i];
				break;
			}
		}
		l->size++;
	}
}
void del(list *y)
{
	datatype i,j;
	for (i = 0, j = 1; j<y->size; j++)
	if (y->a[i] != y->a[j])
		y->a[++i] = y->a[j];
	y->size = i + 1;
}
void scanf_1(list *l)
{
	datatype a = 0;
	scanf("%d", &a);
	while (a)
	{
		l->a[l->size] = a;
		l->size++;
		scanf("%d", &a);
	}
}
int main()
{
	list l, r;
	int i;
	init(&l);
	init(&r);
	printf("请由低到高输入第一个顺序表，以0结尾:");
	scanf_1(&l);
	printf("请由低到高输入第二个顺序表，以0结尾:");
	scanf_1(&r);
	function(&l, &r);
	del(&l);
	printf("合成过后的顺序表是：");
	for (i = 0; i < l.size; i++)
	{
		printf("%d ", l.a[i]);
	}
	system("pause");
	return 0;
}