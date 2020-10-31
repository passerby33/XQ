#ifndef __GAME_H__
#define __GAME_H__
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int row, int col);//初始化棋盘
void disboard(char board[ROW][COL], int row, int col);//打印
void player(char board[ROW][COL]);//玩家下
void computer(char board[ROW][COL]);//电脑下
char check_win(char board[ROW][COL],int row,int col);//判断输，赢，平局，继续下
static int IsFull(char board[ROW][COL], int row, int col);//判断棋盘是否下满
#endif
