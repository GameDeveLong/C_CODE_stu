//用for循环实现一到一百的累次求和
#include<stdio.h>
//int main()
//{
//	int i=0;
//	int sum=0;
//	for (i = 0; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("一到一百的累计求和为%d", sum);
//	return 0;
//}
//用if语句来判断年份是否为闰年的
//满足闰年的条件（1.能被4整除，但不能被100整除  2.可以被400整除）
int main()
{
	int year = 0;
	printf("请输入年份");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year & 100 != 100) || (year % 400 == 0));
	{
		printf("该年是闰年%");
	}

	return 0;
}