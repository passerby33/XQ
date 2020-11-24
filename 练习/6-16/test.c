#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("*****    1.play     *****\n");
	printf("*****    0.exit     *****\n");
	printf("*************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	initboard(board, ROW, COL);
	disboard(board, ROW, COL);
	while (1)
	{
		player(board);
		disboard(board, ROW, COL);
		//判断玩家下子
		ret = check_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer(board);
		disboard(board, ROW, COL);
		//判断电脑下子
		ret = check_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("玩家赢\n");
	}
	else if ('#' == ret)
	{
		printf("电脑赢\n");
	}
	else if ('Q' == ret)
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入;\n");
			break;
		}
	} while (input);
	system("pause");
}