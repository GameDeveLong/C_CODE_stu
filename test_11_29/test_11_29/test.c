#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//11111111  - a
//	signed char b = -1;
//	//11111111  - b和a一样
//	unsigned char c = -1;
//	//000000000000000000000000011111111  - c 十进制表示为225
//	//
//	printf("a=%d b=%d c=%d", a, b, c);
//	//%d十进制的形式打印有符号的整数
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	
//	//1000000000000000000000000010000000
//	//1111111111111111111111111101111111
//	//1111111111111111111111111110000000
//	//10000000 -a
//	//1111111111111111111111111110000000 --a1
//	 printf("%u\n", a);//打印的数应该是 a1
//	//size_t sz = sizeof(char);
//	 char b = 128;
//	 printf("%u\n", b);
//
//	//printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	//char范围是-128~127
//	//-1 -2 -3   -128 127 126 ....1 0;
//	//128+127=255
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	//strlen找的是字符串的长度，遇到\0停止，\0的ASCII值为0
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

struct tga
{
	char name[200];
	int age;
	char id[100];
	char sex[100];
};

int main()
{
	struct tga s1={"zhangsan",20,"20230410","man"};
	struct tga s2 = { .age = 20,.id = "20231015",.sex = "man",.name = "zhangsan" };

	return 0;
}