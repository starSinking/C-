#ifndef _GAME_H_
#define _GAME_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MINE_NUM 10

#define ROW 9
#define COL 9

#define ROWS  ROW+2
#define COLS    COL+2

void InitBoard(char board[][COLS], int rows, int cols, char set);

void ShowBoard(char board[][COLS], int row, int col);

void SetMine(char mine[][COLS], int row, int col);

void FindMine(char mine[][COLS], char mineInfo[][COLS], int row, int col);

#endif // !_GAME_H

