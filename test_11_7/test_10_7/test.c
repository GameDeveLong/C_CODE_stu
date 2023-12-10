#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    printf("%d\n", i);
//    printf("%d", sizeof(i));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//a是变量的名字，可以省略掉sizeof后边的()
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3+1.5));
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%zd", sizeof(pa));
//	return 0;
//}

//struct stu
//{
//	char name[100];
//	int age;
//	float score;
//}s3 = { .name = "haha",.age = 10,.score = 85.6};
//int main()
//{
//	struct stu s1 = { "zhangsan",10,85.6f };
//	struct stu s2 = { "lisi",19,97.5f };
//	
//	printf("%s %d %f\n", s1.name, s1.age, s1.score);
//	printf("%s %d %f\n", s3.name, s3.age, s3.score);
//		
//	return 0;
//}
//int main()
//{
//	char c1 = 120;// 范围为 -128 到 127
//	char c2 = 10;
//	char c3 = c1 + c2;
//    00000000000000000000000001111000---c1
//	00000000000000000000000000001010---c2
//	00000000000000000000000010000010---c1+c2
//	11111111111111111111111110000010--c3原码
//	00000000000000000000000001111101
//	10000000000000000000000001111110---  =-126
//	printf("%d", c3);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;//改变a的值
//	printf("%d", a);
//	return 0;
//}

int main()
{
	printf("%zd\n", sizeof(char*));
	printf("%zd\n", sizeof(short*));
	printf("%zd\n", sizeof(int*));
	printf("%zd\n", sizeof(double*));//在32位也就是（x86下）打印出来都是4
	                                 //在64位也就是（x64下）打印出来都是8
	return 0;
}