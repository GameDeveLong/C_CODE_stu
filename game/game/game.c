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
//	printf("开始猜数字，请输入数字\n");
//	int b = 5;//规定次数
//	while (b)
//	{
//		scanf("%d", &guess);
//		if (guess < a)
//		{
//			printf("猜小了\n");
//		}
//		else if(guess > a)
//		{
//			printf("猜大了\n");
//		}
//		else 
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		b--;
//	}
//	if (b == 0)
//	{
//		printf("猜失败了,正确的数字是%d\n",a);
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char ch1[] = "hello world";
	char ch2[] = "***********";
	int left = 0;//最左边的下标
	int right = strlen(ch1)-1;//最右边的下标
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