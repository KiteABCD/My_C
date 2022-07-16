#ifndef _GAME_H__
#define _GAME_H__
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
void InitIalizaion(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row,int col);
void PlayGame(char board[ROW][COL], int row, int col);
void ComputerGame(char board[ROW][COL] , int row, int col);//¥Ú”°∆Â≈Ã
char IsFinish(char board[ROW][COL], int row, int col);

#endif
