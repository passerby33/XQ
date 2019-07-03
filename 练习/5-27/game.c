#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void disboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
	printf("\n");
}

void player(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int ret = 0;
	printf("请输入下子的位置：\n");
	while (1)
	{
		scanf("%d %d", &i, &j);
		if ((0 < i&&i < 4) && (0 < j&&j < 4))
		{
			if (board[i - 1][j - 1] == ' ')

			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("请在空白位置下子：\n");
			}
		}
		else
		{
			printf("输入错误，请重新输入：\n");
		}
	}
}
void computer(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	while (1)
	{
		 i = rand() % 3;
		 j = rand() % 3;
		 if (board[i][j]==' ')
		{
			board[i][j] = '#';
			break;
		}
	
	}
}
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char check_win(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (IsFull(board, row, col) == 1)
		return 'Q';//平局
	return 'C';//继续
}
