#define _CRT_SECURE_NO_WARNINGS 1



//基本if语句

#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 5 == 0)
//		printf("该数可以被5整除\n");
//	else
//		printf("该数不可以被5整除\n");
//
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >=18)
//		printf("成年了\n");
//	printf("打游戏没有健康系统了\n");
//	
//	return;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年了\n");
//		printf("打游戏没有健康系统了\n");
//	}
//	else
//	printf("未成年\n");
//	return 0;
//}

//int main()//要求输⼊⼀个整数，当输⼊的整数大于0时，是偶数或者奇数
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//		printf("输入的数小于0\n");
//
//	return 0;
//}
#include <stdio.h>
 /*int main()
 {
	 int a = 0;
	 int b = 2;
	 if (a == 1)
		 if (b == 2)
		 printf("hehe\n");
	 else
		 printf("haha\n");
	 return 0;
	 }*/
 //else总是和最近的if匹配，所以输出的结果是：啥都不输出。

#include <stdio.h>
 ///*int main()
 //{
	// int a = 0;
	// int b = 2;
	// if (a == 1)
	// {
	//	 if (b == 2)
	//		 printf("hehe\n");
	// }
	//	 else
	//		 printf("haha\n");
	// 
	// return 0;
 //}
 // 
 // 输⼊任意⼀个整数值，计算除3之后的余数
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("整除，余数为0\n");
//	else if (n % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//	return 0;
//}
//#include <stdio.h>
int main()//switch的写法
{
	int n = 0;
	scanf("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("整除，余数为0\n");
		break;
	case 1:
		printf("余数是1\n");
		break;
	case 2:
		printf("余数是2\n");
		break;
	}
	return 0;
}