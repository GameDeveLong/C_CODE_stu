#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int *p=&a;
//	//int* arr[20] = { 0 };
//	////p是指针变量，是一级指针
//	//int** pp = &p;
//	return 0;
//}
//模拟二维数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 4,5,6,7,8 };
//	int *arr[2] = { arr1,arr2 };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	/*char *ch = "abcde";
//	printf("%c\n", *ch);
//	printf("%c\n", "abcd"[2]);*/
//	char c = "w";
//	char* ch = &c;
//	double b = 3.1458;
//	double* bb = &b;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*ppp)[] = &arr;
//	//ppp是数组指针
//		return 0;
//}
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//void Print1(int arr[2][3], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print2(int(*arr)[3], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	Print1(arr, 2,3);
//	printf("\n");
//	Print2(arr,2,3);
//	return 0;
//}

int Add(int x, int y)
{
	return x * y;
}
int main()
{
	int (*pp)(int ,int) = &Add;//函数指针变量 
	int (*pp1)(int, int) = Add;//函数指针变量 

	/*printf("%p\n", &Add);
	printf("%p\n", Add);*/
	int r1 = Add(3, 7);
	int r2 = (*pp)(6, 14);
	int r3 = pp1(10, 27);
	printf("r1=%d ,r2=%d,r3=%d\n", r1, r2,r3);
	return 0;
}