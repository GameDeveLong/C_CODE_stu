#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////求出0～100000之间的所有“水仙花数”并输出。
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 100000; i++)
//	{
//		if (i > 100 && i <= 999)
//		{
//			  Getmath(i);			
//		}
//		else if (i > 1000 && i <= 9999)
//		{
//			Getmath2(i);
//		}
//		else if (i > 10000 && i < 100000)
//		{
//			Getmath3(i);
//		}
//		
//	}
//	return 0;
//}
//
////int main()
////{
////	
////	int i = 14555;
////    int n = i % 10;//个位
////    int j = i % 100 / 10;//十位
////    int k = i / 100 % 10;//百位
////    int m = i / 1000 % 10;//千位
////    int g = i / 10000;
////		printf("%d\n", n);
////		printf("%d\n", j);
////		printf("%d\n", k);
////		printf("%d\n", m);
////		printf("%d\n", g);
////	return 0;
////
////}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//判断i是否为水仙花数
		//1. 求判断数字的位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. 计算每一位的次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. 判断
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}
