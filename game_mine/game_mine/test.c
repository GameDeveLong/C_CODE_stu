#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
void menu()
{
	printf("*************************\n");
	printf("*****   1.play   ********\n");
	printf("*****   0.exit   ********\n");
	printf("*************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//雷的棋盘
	char show[ROWS][COLS] = { 0 };//初始化为‘*’
////1.初始化棋盘
	Dintbboard(mine, ROWS, COLS, '0');
	Dintbboard(show,ROWS,COLS,'*');
	//打印棋盘
	//Disboard(mine, ROW, COL);
	//Disboard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	Disboard(show, ROW, COL);
	//Disboard(mine, ROW, COL);
	//排查雷
	Findmine(mine,show,ROW,COL);
}
int main()
{
     int input = 0;
	 srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("推出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}