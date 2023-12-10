#define _CRT_SECURE_NO_WARNINGS 1

//猜数字游戏
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
	//1.生产随机数
	int ret = rand() % 100 + 1;//生产1-100随机数
	int guess = 0;
	printf("猜数字\n");
	while (1)
	{
		
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
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
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误\n");
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