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
	char mine[ROWS][COLS] = { 0 };//�׵�����
	char show[ROWS][COLS] = { 0 };//��ʼ��Ϊ��*��
////1.��ʼ������
	Dintbboard(mine, ROWS, COLS, '0');
	Dintbboard(show,ROWS,COLS,'*');
	//��ӡ����
	//Disboard(mine, ROW, COL);
	//Disboard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	Disboard(show, ROW, COL);
	//Disboard(mine, ROW, COL);
	//�Ų���
	Findmine(mine,show,ROW,COL);
}
int main()
{
     int input = 0;
	 srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�Ƴ���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}