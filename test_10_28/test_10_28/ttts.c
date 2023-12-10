#define _CRT_SECURE_NO_WARNINGS 1
//int lean_year(year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else	
//		return 0;	
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int r = lean_year(year);
//	if (r == 1)
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}

//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
//#include<stdio.h>
//void is_prime()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}if (flag == 1)
//			printf("%d ", i);
//	}
//}
//int main()
//{
//	is_prime();
//	return 0;
//}
// 
// 
//创建一个整形数组，完成对数组的操作
//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int j = 0;
//	for(j=0;j<sz;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int i = 0;
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);//把数组元素全为0
//	print(arr,sz);//打印数组每个元素
//	reverse(arr,sz);//完成数组的逆置
//	return 0;
//}

//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#include<stdio.h>
int mul_table(int a)
{
	int i = 1;
	for (i = 1; i <= a; i++)
	{
		int j =1;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d  ",j,i,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	mul_table(a);
	return 0;
}