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
//	//11111111  - b��aһ��
//	unsigned char c = -1;
//	//000000000000000000000000011111111  - c ʮ���Ʊ�ʾΪ225
//	//
//	printf("a=%d b=%d c=%d", a, b, c);
//	//%dʮ���Ƶ���ʽ��ӡ�з��ŵ�����
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
//	 printf("%u\n", a);//��ӡ����Ӧ���� a1
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
//	//char��Χ��-128~127
//	//-1 -2 -3   -128 127 126 ....1 0;
//	//128+127=255
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	//strlen�ҵ����ַ����ĳ��ȣ�����\0ֹͣ��\0��ASCIIֵΪ0
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
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
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