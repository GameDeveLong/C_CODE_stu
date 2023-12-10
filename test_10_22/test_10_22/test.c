#define _CRT_SECURE_NO_WARNINGS 1

//找出100~200之间的素数，并打印在屏幕上。
//注：素数⼜称质数，只能被1和本⾝整除的数字。
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)//产生100-200的数
//	{
//		int j = 0;
//		int num = 1;//假设i是素数
//		for (j = 2; j < i; j++)//产生2-199之间的数
//		{
//			if (i % j == 0)
//			{
//				num = 0;
//				break;
//			}
//		}
//		if (num == 1)
//			printf("%d ", i);
//	}	
//	return 0;
//}
 

//求两个数的最大公约数
int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	scanf("%d%d", &a,&b);
	r = a % b;
	while (r!=0)
	{
		a = b;
		b = r;
	}
	printf("最大公约数是%d", b);
	return 0;
 }