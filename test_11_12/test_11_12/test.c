#define _CRT_SECURE_NO_WARNINGS 1

//冒泡排序
#include<stdio.h>
//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int k = 0;
//		for (k = 0; k <sz-1-i ; k++)
//		{
//			if (arr[k] > arr[k + 1])
//			{
//				int temp = 0;
//				temp = arr[k];
//				arr[k ] = arr[k+1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,1,3,7,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//用函数交换两个数的值

//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("交换后：a=%d b=%d\n", a,b);
//}
//



//#include <stdio.h>
//
//void test(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr,sz);
//	return 0;
//}
void Swap(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int temp = 0;
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Swap(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}	
	return 0;
}