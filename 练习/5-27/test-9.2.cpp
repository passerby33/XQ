#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include<stdlib.h>
typedef int datatype;
typedef struct node
{
	datatype data;
	struct node *next;
}*link;
int push(link *top, datatype x)
{
	link s = (link)malloc(sizeof(struct node));
	if (s == NULL)
	{
		return 0;
	}
	s->data = x;
	s->next = (*top);
	(*top) = s;
	return 1;
}
int empty(link top)
{
	if (top == NULL)
		return 1;
	return 0;
}
int out(link *top, datatype *x)
{
	if (top != NULL)
	{
		link p = (*top);
		(*x) = (*top)->data;
		(*top) = (*top)->next;
		free(p);
		return 1;
	}
	return 0;
}
void Transform(int num)
{
	datatype h;
	link top = NULL;
	printf("二进制数为：");
	if (num>0)
	{
		while (num != 0)
		{
			h = num%2;
			push(&top, h);
			num = num / 2;
		}
		while (!empty(top))
		{
			out(&top, &h);
			printf("%d", h);
		}
		printf("\n");
	}
	else if (num<0)
	{
		printf("-");
		num = num*(-1);
		while (num != 0)
		{
			h = num%2;
			push(&top, h);
			num = num / 2;
		}
		while (!empty(top))
		{
			out(&top, &h);
			printf("%d", h);
		}
		printf("\n");
	}
	else
		printf("%d\n", 0);
}
int main()
{
	int num = 0;
	printf("请输入一个十进制数：");
	scanf("%d", &num);
	Transform(num);
	system("pause");
	return 0;
}
