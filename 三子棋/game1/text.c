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
	InitIalizaion(board, ROW, COL);//��ʼ������
	Displayboard(board, ROW, COL);//��ӡ����
	//����
	//���
	while (1)
	{
		PlayGame(board, ROW, COL);
		Displayboard(board, ROW, COL);//��ӡ����
		ret = IsFinish(board, ROW, COL);
		if (ret !='C')
		{
			break;
		}
		ComputerGame(board, ROW, COL);//��������
		Displayboard(board, ROW, COL);//��ӡ����
		ret = IsFinish(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int choose=0;
	do
	{
		menu();
		printf("����������ѡ��:\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����ѡ������������ѡ��\n");
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