#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
Getmath(i)
{
	int n = i % 10;//��λ
	int j = i % 100 / 10;//ʮλ
	int k = i / 100;//��λ
	if (i == (k * k * k) + (j * j * j) + (n * n * n))
	{
		printf("%d\n", i);
	}
}

Getmath2(i)
{
	int n = i % 10;//��λ
	int j = i % 100 / 10;//ʮλ
	int k = i / 100 % 10;//��λ
	int m = i / 1000;//ǧλ
	if (i == (n * n * n * n) + (j * j * j * j) + (k * k * k * k) + (m * m * m * m))
	{
		printf("%d\n", i);
	}
}

Getmath3(i)
{
	int n = i % 10;//��λ
	int j = i % 100 / 10;//ʮλ
	int k = i / 100 % 10;//��λ
	int m = i / 1000 % 10;//ǧλ
	int g = i / 10000;
	if (i == (n * n * n * n * n) + (j * j * j * j * j) + (k * k * k * k * k) + (m * m * m * m * m) + (g * g * g * g * g))
	{
		printf("%d\n", i);
	}
}