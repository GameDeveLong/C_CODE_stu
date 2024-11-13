#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}

//int main()
//{
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	if (ptr == NULL)//判断开辟是否失败
//	{
//		//perror("malloc fail");
//		printf("内存分配失败");
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		ptr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr[i] );
//	}
//	free(ptr);//释放空间
//	return 0;
//}
//
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int* ptr = (int*)calloc(10,sizeof(int));
//	if (ptr == NULL)//判断开辟是否失败
//	{
//		printf("内存分配失败");
//	}
//	
//	free(ptr);//释放空间
//	return 0;
//}

//int main()
//{ 
//	int *ptr = (int*)malloc(sizeof(int)*5);
//	if (ptr == NULL)
//	{
//		printf("内存分配失败");
//		return 1;
//	}
//	//给数组赋值
//	for (int i = 0; i < 5; i++)
//	{
//		ptr[i] = i;
//	}	
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", ptr[i] = i);
//	}
//	printf("\n");
//	//扩大这个数组，用realloc重新分配内存，新的大小可以容纳10个整型
//	int *new_ptr = (int*)realloc(ptr, sizeof(int) * 10);\
//		if (new_ptr == NULL)
//		{
//			printf("内存分配失败");
//			free(ptr);
//			return 1;
//		}
//	ptr = new_ptr;
//	for (int i = 5; i < 10; i++)
//	{
//		ptr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", ptr[i] = i);
//	}
//	free(ptr);
//	return 0;
//}
//void Test()
//{
//	int* ptr1 = new int;// 动态申请一个int类型的空间
//	int* ptr2 = new int(10);// 动态申请一个int类型的空间并初始化为10
//	int* ptr3 = new int[5];//new int[5] 申请的是能存储5个 int 类型数据的连续内存空间。
//
//
//	delete ptr1;
//	delete ptr2;
//	delete[] ptr3;//[]要匹配使用
//}
//
//template<class T>
//T Add(const T& x, const T& y)
//{
//	return x + y;
//}
//
//int main()
//{
//	cout << Add(95555, 10)<<endl;
//	cout << Add(39.0, 10.2)<<endl;
//	int a = 10;
//	double b = 19.9;
//	cout<<Add<double>(a, b);
//	return 0;
//}
//
//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 4)
//	{
//		_array = new T[capacity];
//		_capacity = capacity;
//		_size = 0;
//	}
//	void push(T& Data);
//private:
//	int _size;
//	int _capacity;
//	T* a;
//};
//int main()
//{
//	Stack<int> st1;
//	return 0;
//}

//int main()
//{
//	string s1("ABCDEFG");
//	string s2(s1);
//	string s3;
//	cout << s3;
//	cout << s2;
//	return 0;
//}
void test_string()
{
	string s1("hello world");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}

	cout << " "<<endl;
	//string::reverse_iterator it1 = s1.rbegin();
	auto it1 = s1.rbegin();
	while (it1 != s1.rend())
	{
		cout << *it1 << " ";
		++it1;
	}

}
void test_string0()
{
	string s1("hello world");
	string s2("hello worldxxxx");
	/*for (char ch : s1)
	{
		cout << ch;
	}*/
	cout << s1.size() << endl;
	cout << s1.length() << endl;
}

class A
{
private:
	char _b[16];
	char* ch;

	size_t size;
	size_t capacity;
};
int main()
{
	//test_string0();
	cout << sizeof(A);
	return 0;
}