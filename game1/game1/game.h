#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//1.����������
//��ʼ������.
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
//���Ӯ--'*'
//����Ӯ--'#'
//ƽ��-- 'Q'
//����--'c'
char IsWin(char board[ROW][COL], int row, int col);
