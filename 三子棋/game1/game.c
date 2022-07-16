#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void InitIalizaion(char board[ROW][COL], int row, int col)
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
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (int i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("--- ");
			}
			printf("\n");
		}
	}
}
int IsEmpty(char board[ROW][COL], int row, int col)
{
	if (board[row][col] == ' ')
	{
		return 1;
	}
	return 0;
}

void PlayGame(char board[ROW][COL], int row, int col)
{
	int ret = 0;
	int x = 0;
	int y = 0;
	printf("玩家输入:>\n");
	while (1)
	{
		printf("请输入坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x<1 && x>row&&y<1 && y>row)
		{
			printf("您的输入有误，请重新输入\n");
		}
		else
		{
			if (ret = IsEmpty(board, x - 1, y - 1))
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占用\n");
			}
		}
	}
}
void ComputerGame(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("电脑输入:>\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (ret = IsEmpty(board, x, y))
		{
			break;
		}
	}
	board[x][y] = '#';
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsFinish(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//竖三列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] &&board[1][1]==board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (ret = IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}