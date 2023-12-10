#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//int main()
//{
//	printf("%zd\n", sizeof(long));
//	return 0;
//}

#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//假设long 是4个字节
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()

//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//enum ENUM_A enumA = Y1;
//enum ENUM_A enumB = B1;
//int main()
//{
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}

//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}

#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//struct A
//{
//    int a;
//    short b;
//    int c;
//    char d;
//};
//
//struct B
//{
//    int a;
//    short b;
//    char c;
//    int d;
//};
//int main()
//{
//    printf("%zd %zd", sizeof(struct A), sizeof(struct B));
//    return 0;
//}

//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[30] = { 0 };
//    int key = 0;
//    scanf("%d\n", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d\n", &key);
//    int j = 0;
//    while (i < n)
//    {
//        if (arr[i] != key)
//        {
//            arr[j++] = arr[i++];
//        }
//        else
//        {
//            i++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[j]);
//    }
//    return 0;
//}

//struct S
//{
//	int x;
//	int y;
//}s1;//声明类型的同时定义变量
//
//struct S s2;//定义变量
//struct S s3 = { 10,20 };//初始化

//struct Student s = { "zhangsan",20 };//对student这个结构体初始化
//struct Student s2 = {.age=10,.Name="zhangsan"};//指定顺序初始化
//
//struct Node
//{
//	int data;
//	struct Node* next;
//}n1 = { 10,  NULL }; //结构体嵌套初始化
//struct Node n2 = { 20,  NULL };
//struct Stu
//{
//	int ID;//学号
//	int age;//年龄
//};
//int main()
//{
//	struct Stu s1 = { "zhangsan",20 };
//	struct Stu * sr  = &s1;
//	sr->ID = 20231111;
//	sr->age = 30;
//	printf("%d %d\n",sr->age,sr->ID );
//	return 0;
//}

//struct S
//{
//	int a[100];
//	int num;
//};
//struct S s = { {1,2,5,4,8},20 };
//void my_Fun1(struct S s)
//{
//	printf("%d\n", s.a);
//}
//void my_Fun2(struct S* s)
//{
//	printf("%d\n", s->num);
//}
//int main()
//{
//	my_Fun1(s);
//	my_Fun2(&s);
//	return 0;
//}
#include<stdio.h>
//#pragma pack(1)//修改对齐数为1
struct S1
{
	char a;
	int i;
	short b;
};
struct S2
{
	char a;
	short b;
	int i;
};
//#pragma pack()//取消设置的对⻬数，还原为默认
int main()
{
	printf("结构体S1的大小为：%d\n结构体S2的大小为：%d\n", sizeof(struct S1), sizeof(struct S2));
	return 0;
}