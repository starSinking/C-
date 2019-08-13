#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int menu()
{
	printf("********************\n");
	printf("********************\n");
	printf("****1、开始游戏*****\n");
	printf("****0、退出游戏*****\n");
	printf("********************\n");
	printf("********************\n");

}
void game()
{
	//存放雷   1代表是雷
	char mine[ROWS][COLS] = { 0 };
	//排查雷  *
	char mineInfo[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(mineInfo, ROWS, COLS, '*');
	ShowBoard(mineInfo, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, mineInfo, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始：\n");
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("请输入正确的数字：\n");
			break;
		}

	} while (input);
	return 0;
}