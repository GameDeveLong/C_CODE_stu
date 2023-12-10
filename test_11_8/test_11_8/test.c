#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int Fing_Single_dog(int arr[], int sz)
//{
//	int i = 0;
//	int single_dog = 0;
//	for (i = 0; i < sz; i++)
//	{
//		single_dog ^= arr[i];
//	}
//	return single_dog;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog =Fing_Single_dog(arr,sz);
//	printf("%d", dog);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    float money = 0;
//    int month = 0;
//    int day = 0;
//    int c = 0;
//    double find = 0;
//    scanf("%4f%2d%2d%d", &money, &month, &day, &c);
//    if (day == 11 && month == 11 && c == 1)
//    {
//        double find = (money * 0.7) - 50;
//    }
//    if (day == 12 && month == 12 && c == 1)
//    {
//        double find = (money * 0.8) - 50;
//
//    }
//
//    printf("%lf", find);
//    return 0;
//}


//不能创建临时变量（第三个变量），实现两个数的交换

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//a^a=0;
//a^0=a;

int main()
{
	int a = 5;
	int b = 10;
	int c = (b > a, b + a,a>b);
	printf("%d\n", c);
	return 0;
}