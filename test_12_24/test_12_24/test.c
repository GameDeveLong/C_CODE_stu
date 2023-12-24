#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#if 0
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	/*printf("&arr    = %p\n", arr);
//	printf("&arr[0] = %p\n", &arr[0]);*/
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//
//	return 0;
//}

int main()
{
	int arr[10] = {0};
	printf("arr       = %p\n", arr);//类型是int*
	printf("arr+1     = %p\n", arr+1);//跳过4个字节

	printf("&arr[0]   = %p\n", &arr[0]);//也是int*
	printf("&arr[0]+1 = %p\n", &arr[0]+1);//也跳过4个字节

	printf("&arr      = %p\n", &arr);
	printf("&arr+1    = %p\n", &arr+1);
	


	return 0;
}
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));//*(p + i)也可以换为p[i]
		//编译器在编译的时候，是先找到地址，然后在解引用来访问的
	}
	return 0;
}

void Bubble(int arr[], int sz)
{
	//趟数是sz-1次
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
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
	int arr[] = { 4,5,6,2,7,3,1,8,9,0 };//升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#endif
#include<stdio.h>
int  cmp_int(const void*ps1,const void*ps2)
{
	return *(int*)ps1 - *(int*)ps2;
}
void swap(char* s1, char* s2, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		char ch = *s1;
		*s1 = *s2;
		*s2 = ch;
		s1++;
		s2++;
	}
}
my_bubble_qort(void* base, size_t sz, size_t size, int(*cmp)(const void* p1, const void* p2))
{

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char *)base+j * size, (char*)base + (j+1) * size)>0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
Print_num(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test1()
{
	int arr[] = { 5,7,8,3,2,1,6,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int size = sizeof(arr[0]);
	my_bubble_qort(arr,sz,size,cmp_int);
	Print_num(arr,sz);
}
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}
void test2()
{
	struct Stu arr[] = { {"zhangsan",18},{"wangmazi",20},{"lisi",30}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_bubble_qort(arr, sz, sizeof(arr[0]), cmp_stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].age);
	}
}


int cmp_stu_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}
void test3()
{
	struct Stu arr[] = { {"zhangsan",18},{"wangmazi",20},{"lisi",30} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_bubble_qort(arr, sz, sizeof(arr[0]), cmp_stu_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].age);
	}
}
int main()
{
	//test1();//排序整数
	//test2();//排序结构体，按名字
	test3(); //排序结构体，按年龄
	return 0;
}