//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct Stu
//{
//	char name[30];
//	int age;
//};
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//void Swap(char* buff1, char* buff2, size_t width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = tmp;
//	    buff1++;
//		buff2++;
//	}
//}
//void my_qsort(void*base, size_t sz,size_t width,int (*cmp)(const void*p1,const void*p2))
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void my_qsort2(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	int arr[] = {3,5,1,7,2,4,8,9,0,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	Print(arr, sz);
//	printf("\n");
//}
//test2()
//{
//	struct Stu s[] = {{"zhangsan",15},{"lisi",18},{"wangmazi",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort2(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//
//	}
//}
//
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main1()
//{
//	int arr[10];
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//	/*if (p == 1)
//	{
//		perror("malloc");
//		return 1;
//	}*/
//	if (p == 1)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//
//	}
//	else
//	{
//		return 1;
//	}
//
//	ptr = (int*)realloc(ptr, 1000);
//
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//
//	{
//		ptr = p;
//	}
//	free(ptr);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int* p = (int*)malloc(3 * 5 * sizeof(int));
	if (p == NULL)
	{
		perror("malloc");
	}
	int i = 0; 
    int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%p\n", &p[5 * i * j]);
		}
	}
	free(p);
	p = NULL;
	return 0;
}