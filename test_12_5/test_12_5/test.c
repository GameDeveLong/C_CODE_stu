#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pp[])(int,int ) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pp[i](9, 3));
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("******  1.加法  *********\n");
//	printf("******  2.减法  *********\n");
//	printf("******  3.乘法  *********\n");
//	printf("******  4.除法  *********\n");
//	printf("******  0.退出  *********\n");
//	printf("*************************\n");
//}
//int main()//一个简单计算器
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();		
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数");
//			scanf("%d %d", &x, &y);
//				 ret=Add( x, y);
//				 printf("%d\n", ret);
//				break;
//		case 2:
//			printf("请输入两个数");
//			scanf("%d %d", &x, &y);
//			 ret = Sub(x, y);
//			 printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个数");
//			scanf("%d %d", &x, &y);
//			 ret = Mul(x, y);
//			 printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个数");
//			scanf("%d %d", &x, &y);
//			 ret = Div(x, y);
//			 printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错位，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//用指针数组重新写一个
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("******  1.加法  *********\n");
//	printf("******  2.减法  *********\n");
//	printf("******  3.乘法  *********\n");
//	printf("******  4.除法  *********\n");
//	printf("******  0.退出  *********\n");
//	printf("*************************\n");
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();				
//		int (*pp[])(int ,int ) = {NULL,Add,Sub,Mul,Div};
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数");
//			scanf("%d %d", &x,&y);
//			ret=pp[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，重新输入");
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pp[])(int,int ) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pp[i](9, 3));
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("******  1.加法  *********\n");
//	printf("******  2.减法  *********\n");
//	printf("******  3.乘法  *********\n");
//	printf("******  4.除法  *********\n");
//	printf("******  0.退出  *********\n");
//	printf("*************************\n");
//}
//calc(int (*p)(int, int))
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个数");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main()//一个简单计算器(改进版)
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();		
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//				break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错位，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
#include<stdio.h>
#include<stdlib.h>
//struct Stu
//{
//	char Name[20];
//	int age;
//};
//int cmp_stu_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//
//}
//int main()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
//	return 0;
//}


void FindNum(int arr[], int n, int* num1, int* num2)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret ^= arr[i];
	}
	int k = 0;
	for(int i=0;i<32;i++)
	{ 
	if ((ret >> i) & 1 == 1)
	   {
		k = i;
		break;
	    }
    }
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] >> k & 1) == 1)
		{
			*num1 ^= arr[i];
		}
		else
		{
			*num2 ^= arr[i];
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	FindNum(arr, len, &num1, &num2);
	printf("%d %d\n", num1, num2);
	return 0;
}