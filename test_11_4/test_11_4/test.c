#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int r =Fun(n);
//    printf("%d", r);
//    return 0;
//}
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print( n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//int Fact(int n)//�ݹ�
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * Fact(n - 1);
//}
//int Fun(n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int r = Fact(n);
//	int t = Fun(n);
//	//printf("%d\n", r);
//	printf("%d\n", t);
//
//	return 0;
//}


//int Fib(int n)//쳲�������
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	while (n >= 3)
//	{
//		k = i + j;
//		j = i;
//		i = k;
//		n--;
//	}
//	return k;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d", r);
//	return 0;
//}

//n��k�η�
#include<stdio.h>
int Math(int n, int k)
{
	if (k < 2)
		return n;
	else
		return n * Math(n, k - 1);
}

int main()
{
	int  n = 0;
	int k = 0;
	scanf("%d %d", &n,&k);
	int r =Math(n,k);
	printf("%d��%d�η���%d",n,k, r);
	return 0;
}