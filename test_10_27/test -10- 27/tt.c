#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//写一个函数打印1~n的数字
//void Print(n)
//{
//	if (n < 1)
//		return;//提前结束
//	int i = 0;
//	for (i = 1; i <=n; i++)
//	{
//		printf("%d ", i);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//写⼀个函数对将⼀个整型数组的内容，全部置为 - 1，再写⼀个函数打印数组的内容

//1.参和形参的名字可以相同
//2. 数组传参写的是数组名
//3. 形参写的也是数组的形式，并且在形参书写的时候可以省略元素个数（针对一维数组）
//4. 数组传参后，形式的数组和实参的数组是同一块空间，改变形参的数组就是在修改实参数组
//void Set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void Prt_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Set_arr(arr,sz);//把arr数组里面的数都变成-1
//	Prt_arr(arr,sz);//打印改变后数组
//	return 0;
//}

//假设我们计算某年某⽉有多少天？，如果要函数实现，可以设计2个函数:
Is_lyear(year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return 1;//是闰年返回1
	else
		return 0;
		
}
int get_year_month(int year,int month)
{
	int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int day = arr[month];
	if(Is_lyear(year)&&month==2);
	{
		day++;
	}
	return day;
}
int main()
{
	int year = 0;//年
	int month = 0;//月
	scanf("%d %d", &year, &month);
	int d = get_year_month(year,month);
	printf("%d",d);
	return 0;
}