#define _CRT_SECURE_NO_WARNINGS 1

//��������Ϸ
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("******************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("******************\n");
	printf("******************\n");

}
void game()
{
	//1.���������
	int ret = rand() % 100 + 1;//����1-100�����
	int guess = 0;
	printf("������\n");
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������\n");
		}
	} while (input);
	
	return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//	r = rand();
//	printf("%d\n", r);
//
//	return 0;
//}