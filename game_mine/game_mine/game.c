#define _CRT_SECURE_NO_WARNINGS 1
//函数的实现
#include"game.h"
void Dintbboard(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			 arr[i][j] = set;
		}
	}
}


void Disboard(char arr[ROWS][COLS], int rows, int cols)
{
	int i = 1;
	for (i = 0; i <= rows; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= rows; i++)
	{
		int j = 1;
		printf("%d ", i);
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", arr[i][j]);
		}printf("\n");
	}
}

void Setmine(char arr[ROWS][COLS], int row, int col)
{
	//布置n个雷
	int count = lei;
	while (count)
	{
		int x = rand()%ROW+1;//1-9
		int y = rand()%COL+1;//1-9
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

Getmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]-8*'0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - lei)
	{
		printf("请输入坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Disboard(mine, ROW, COL);
				break;
			}
			else
			{
				int n = Getmine(mine, show, x, y);
				show[x][y] = n + '0';
				Disboard(show, ROW, COL);
				win++;
			}
		}
		else
		 {
			printf("坐标错误，请重新选择\n");
		 }
		if (win == row * col - lei)
		{
			printf("恭喜你，排雷成功\n");
			Disboard(mine, ROW, COL);
		}
	}
}


	