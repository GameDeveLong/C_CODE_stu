#pragma once
#define ROW 9//��
#define COL 9//��
#define ROWS ROW+2//��ֹԽ�紴������
#define COLS COL+2//��ֹԽ�紴������
#define lei 80


//����������
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ʼ������
void Dintbboard(char arr[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void Disboard(char arr[ROWS][COLS], int row, int col);
//������
void Setmine(char arr[ROWS][COLS], int row, int col);
//�Ų���
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS] ,int row, int col);
//ͳ���׵ĸ���
int Getmine(char mine[ROWS][COLS],int x,int y);
