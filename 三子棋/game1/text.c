#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<Windows.h>

void menu()
{
	printf("************************\n");
	printf("****1.play    0.exit****\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitIalizaion(board, ROW, COL);//初始化数组
	Displayboard(board, ROW, COL);//打印棋盘
	//下棋
	//玩家
	while (1)
	{
		PlayGame(board, ROW, COL);
		Displayboard(board, ROW, COL);//打印棋盘
		ret = IsFinish(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}
		ComputerGame(board, ROW, COL);//电脑下棋
		Displayboard(board, ROW, COL);//打印棋盘
		ret = IsFinish(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int choose=0;
	do
	{
		menu();
		printf("请输入您的选择:\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("您的选择有误，请重新选择\n");
			break;
		}
	} while (choose);
}
int main()
{
	test();
	system("pause");
	return 0;
}