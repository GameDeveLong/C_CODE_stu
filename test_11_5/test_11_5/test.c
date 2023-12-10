#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int DigitSum(n)
//{
//	int a = 0;
//	if (n > 10)
//	{
//		a = n % 10;
//		return a +  DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r =DigitSum(n);
//	printf("%d ", r);
//	return 0;
//}


//int Fact(int n)//递归
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * Fact(n - 1);
//}
//int Fun(n)//非递归
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int r = Fact(n);
//	int t = Fun(n);
//	//printf("%d\n", r);
//	printf("%d\n", t);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 12;
//	int b = 5;
//	int c = a & b;
//	printf("%d", c);
//	return 0;
//}
//

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cunt = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i)&1 == 1)
//		{
//			cunt++;
//		}
//		
//	}
//	printf("%d", cunt);
//	return 0;
//}

//00000000000000000000000000000101
//>>32   0 >>30 0


int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	printf("奇数位");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数位");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}

	return 0;
}