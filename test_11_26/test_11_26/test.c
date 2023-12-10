#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d，b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后a=%d，b=%d\n", a, b);
//
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	char* ch = "abcdf";
//	printf("%s\n", ch);
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//冒泡排序
void Bulle(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 5,4,29,7,8,3,1,10,6,22,70,98,100 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bulle(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}