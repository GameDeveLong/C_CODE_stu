#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
Getmath(i)
{
	int n = i % 10;//个位
	int j = i % 100 / 10;//十位
	int k = i / 100;//百位
	if (i == (k * k * k) + (j * j * j) + (n * n * n))
	{
		printf("%d\n", i);
	}
}

Getmath2(i)
{
	int n = i % 10;//个位
	int j = i % 100 / 10;//十位
	int k = i / 100 % 10;//百位
	int m = i / 1000;//千位
	if (i == (n * n * n * n) + (j * j * j * j) + (k * k * k * k) + (m * m * m * m))
	{
		printf("%d\n", i);
	}
}

Getmath3(i)
{
	int n = i % 10;//个位
	int j = i % 100 / 10;//十位
	int k = i / 100 % 10;//百位
	int m = i / 1000 % 10;//千位
	int g = i / 10000;
	if (i == (n * n * n * n * n) + (j * j * j * j * j) + (k * k * k * k * k) + (m * m * m * m * m) + (g * g * g * g * g))
	{
		printf("%d\n", i);
	}
}