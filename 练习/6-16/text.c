#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*****************\n");
	printf("*****1.play *****\n");
	printf("*****0.exit *****\n");
	printf("*****************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//����������
	char show[ROWS][COLS] = { 0 };//��ʾ����Ϣ����
	initboard(mine,ROWS,COLS,'0');
	initboard(show, ROWS, COLS, '*');
	disboard(mine, ROW, COL);
	disboard(show, ROW, COL);
}
int main()
{
	int a = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &a);
		switch (a)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
			printf("�����������������:\n");
			break;
		}
	} while (a);
	system("pause");
	return 0;
}