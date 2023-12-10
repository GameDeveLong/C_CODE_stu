#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()//求十个值中的最大值
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("输入第%d个数\n", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大值为%d", max);
//	return 0;
//}
//int main()//1000-2000之间的闰年
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			printf("%d  ", year);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9 || i % 10 == 9)
//		{
//			printf("%d ", i);
//			n = n + 1;
//		}
//	}
//	printf("出现9的个数是%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	float num = 0;
//	for (i = 1; i < 100; i=i+2)
//	{
//		num = (1.0 / i) - 1.0 / (i + 1);
//		sum += num;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


int main()//九九乘法表
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}