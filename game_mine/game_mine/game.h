#pragma once
#define ROW 9//行
#define COL 9//列
#define ROWS ROW+2//防止越界创建的行
#define COLS COL+2//防止越界创建的列
#define lei 80


//函数的声明
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//初始化棋盘
void Dintbboard(char arr[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void Disboard(char arr[ROWS][COLS], int row, int col);
//布置雷
void Setmine(char arr[ROWS][COLS], int row, int col);
//排查雷
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row, int col);
//统计雷的个数
int Getmine(char mine[ROWS][COLS],int x,int y);
