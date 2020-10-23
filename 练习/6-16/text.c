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
	char mine[ROWS][COLS] = { 0 };//布置雷棋盘
	char show[ROWS][COLS] = { 0 };//显示雷信息棋盘
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
		printf("请选择：\n");
		scanf("%d", &a);
		switch (a)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
		default:
			printf("输入错误，请重新输入:\n");
			break;
		}
	} while (a);
	system("pause");
	return 0;
}