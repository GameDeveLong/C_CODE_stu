#define _CRT_SECURE_NO_WARNINGS 1
//#include<time.h>
//#include<stdlib.h>
//#include<stdio.h>
//void menu()
//{
//	printf("******************\n");
//	printf("******1.play******\n");
//	printf("******0.exit******\n");
//	printf("******************\n");
//}
//void game()
//{
//	int a = rand() % 100 + 1;
//	int guess = 0;
//	printf("��ʼ�����֣�����������\n");
//	int b = 5;//�涨����
//	while (b)
//	{
//		scanf("%d", &guess);
//		if (guess < a)
//		{
//			printf("��С��\n");
//		}
//		else if(guess > a)
//		{
//			printf("�´���\n");
//		}
//		else 
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		b--;
//	}
//	if (b == 0)
//	{
//		printf("��ʧ����,��ȷ��������%d\n",a);
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//����ַ��������ƶ������м���
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char ch1[] = "hello world";
	char ch2[] = "***********";
	int left = 0;//����ߵ��±�
	int right = strlen(ch1)-1;//���ұߵ��±�
	printf("%s\n", ch2);
	Sleep(1000);
	while (left<=right)
	{
		ch2[left] = ch1[left];
		ch2[right] = ch1[right];
		printf("%s\n", ch2);
		Sleep(1000);
		//system("cls");
		left++;
		right--;
	}
	return 0;
}