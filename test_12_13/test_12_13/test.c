#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	int ID;
//};
//
//struct Stu s = { "张三",20,20231022 };
//void test1(struct Stu s)
//{
//	printf("%s %d %d\n", s.name, s.age, s.ID);
//}
//void test2(struct Stu* s)
//{
//	printf("%s %d %d\n", s->name, s->age, s->ID);
//}
//int main()
//{
//	test1(s);
//	test2(&s);
//}

//union Un1
//{
//	char c[5];//5
//	//1 8  1
//	int i;//4
//	// 4   8   4
//};
//union Un2
//{
//	short c[7]; //14
//	// 2  8  2
//	int i;//4
//	//4  8  4
//};
//
//int main()
//{
//	union Un2 u;
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//8
//	printf("%p\n",  &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//	return 0;
//}

//使⽤联合体是可以节省空间的，举例：
//⽐如，我们要搞⼀个活动，要上线⼀个礼品兑换单，礼品兑换单中有三种商品：图书、杯⼦、衬衫。
//每⼀种商品都有：库存量、价格、商品类型和商品类型相关的其他信息。
//图书：书名、作者、⻚数
//杯⼦：设计
//衬衫：设计、可选颜⾊、可选尺⼨
struct gift_lift
{
	int stock_number;//库存量
	double price; //定价
	int item_type;//商品类型
	union un
	{
		struct
		{
			char name[30];//书名
			char author[40];//作者
			int num_pags;//⻚数
		}book;
		struct
		{
			char design[50];//设计
		}cup;
		struct
		{
			char design[50];//设计
			char colors[30];//颜色 
			int size;//尺寸
		}shirt;
	}ietm;
};


//判断当前机器是⼤端？还是⼩端？
int check_sys()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;//返回1是⼩端，返回0是⼤端
}
int main()
{
	int r = check_sys;
	printf("%d\n",r );
	return 0;
}