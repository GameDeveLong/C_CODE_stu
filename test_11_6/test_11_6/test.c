#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//}

//int Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fact(n - 1);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r =Fact(n);
//	printf("%d", r);
//	return 0;
//
//}
#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;//统计第3个斐波那契数被计算的次数
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret =Fib(n);
	printf("%d\n", ret);
	//printf("count=%d", count);

	return 0;
}