#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int*pf=&a;
//	*pf = 0;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n",sizeof(short*));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa1 = &a;
//	*pa1 = 0;
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char* pa2 = (char*)& a;
//	*pa2 = 0;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("&n   %p\n", &n);
//	printf("pc   %p\n", pc);
//	printf("pc+1 %p\n", pc + 1);
//	printf("pi   %p\n", pi);
//	printf("pi+1 %p\n", pi + 1);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	void *pa=&a;
//	void* pb = &b;
//	*pa = 0;
//	*pb = 10;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	n = 20;//n可以被修改
//	const int m = 20;
//	m = 0;//m不可以被修改
//	return 0;
//}

//#include <stdio.h>
////代码1
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test2()
//{
//	//代码2
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //ok?
//	//p = &m; //ok?
//}
//void test4()
//{
//	int n = 10;
//	int m = 20;
//	int const* const p = &n;
//	//*p = 20; //ok?
//	//p = &m; //ok?
//}
//int main()
//{
//	//测试⽆const修饰的情况
//	test1();
//	//测试const放在*的左边情况
//	test2();
//	//测试const放在*的右边情况
//	test3();
//	//测试*的左右两边都有const
//	test4();
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//模拟strlen函数用指针-指针
//#include<stdio.h>
//int my_strlen(char* arr[])
//{
//	char* start = arr;
//	while (*start)
//	{
//		start++;
//	}
//	return start-arr;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret =my_strlen(arr);
//	printf("%d ", ret);
//	return 0;
//}

void Add(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	printf("交换前a=%d b=%d\n", a, b);
//	Add(&a,&b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr     = %p\n", arr);
//	printf("&arr     = %p\n", &arr);
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("&arr[0]   = %p\n", &arr[0]);
	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
	printf("arr       = %p\n", arr);
	printf("arr+1     = %p\n", arr + 1);
	printf("&arr      = %p\n", &arr);
	printf("&arr+1    = %p\n", &arr + 1);
	return 0;
}