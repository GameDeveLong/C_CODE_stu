#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("******************\n");
	printf("*******1.play*****\n");
	printf("*******0.exit*****\n");
	printf("******************\n");
}
void game()
{
	char ch = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������.
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	//����
	while (1)
	{
		PlayerMove(board, ROW, COL);//���
		ch=IsWin(board, ROW, COL);
		if (ch != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);//����
		ch = IsWin(board, ROW, COL);
		if (ch != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);
	}
	if (ch == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ch == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		}
	} while (input);
	return 0;
}