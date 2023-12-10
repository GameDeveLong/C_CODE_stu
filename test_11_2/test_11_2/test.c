#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n =0;
//	int i = 0;
//	int up = 7;
//	int down = 6;
//	for (i = 0; i < up; i++)
//	{
//		int j = 0;
//		for (j = 0; j < up - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	for (int i = 0; i < down; i++)
//	{
//		int j = 0;
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (down - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

int Getmath(i)
{
	int n = i%10;//个位
	int j = i%100/10;//十位
	int k = i/100;//百位
	if (i == (k * k * k) + (j * j * j) + (n * n * n))
	{
		return i;
	}
}
//求出0～100000之间的所有“水仙花数”并输出。
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 100000; i++)
//	{
//		if (i > 100 && i <= 999)
//		{
//			  Getmath(i);
//			printf("%d\n", );
//		}
//		else if (i > 1000 && i <= 9999)
//		{
//			//Getmath2(i);
//		}
//		else if (i > 10000 && i < 100000)
//		{
//			//Getmath3(i);
//		}
//		
	/*}

	return 0;
}*/
//

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 147;
//	i = 147 % 10;
//	j = 147 % 100/10;
//	int k = 147 / 100;
//	printf("%d\n", i);
//	printf("%d\n", j);
//	printf("%d\n", k);
//	return 0;
//}

//int main()
//{
//	for ( int i = 100; i < 999; i++)
//	{
//		int n = i % 10;//个位
//		int j = i % 100 / 10;//十位
//		int k = i / 100;//百位
//		if (i == (k * k * k) + (j * j * j) + (n * n * n))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//2+22+222+2222+22222之和
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a1 = n;
//	int a2 = (n * 10) + a1;
//	int a3 = (n * 100) + a2;
//	int a4 = (n * 1000) + a3;
//	int a5 = (n * 10000) + a4;
//	int sum = a1 + a2 + a3 + a4 + a5;
//	printf("%d", sum);
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
#include<stdio.h>
int main()
{
	int n = 20;
	int a = 20 / 1;//本来可以喝多少
	int b = a / 2;//空瓶可以换的汽水个数
	int sum = a + b;
	printf("一共可以喝%d瓶", sum);
	return 0;
}