#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//用while循环打印1-100
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	
//	return 0;
//}


//输⼊⼀个正的整数，逆序打印这个整数的每⼀位

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		printf("%d ", i % 10);
//		i = i / 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i = i + 2;
//	} while (i <= 1000);
//
//	return 0;
//
// }//打印1-1000之间的奇数
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			 break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

/*int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d ", i);

	}
	return 0;
	
}*///continue只是跳过continue后面的代码，直接返回上面for循环里的调整部分

//打印200-300之间的素数
int main()
{
	int i = 0;
	for (i = 201; i <= 300; i+=2)//偶数一定不是素数，所以只用判断奇数进行了
	{
		int flag = 1;//i为素数时
		int j = 0;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if (flag)
				printf("%d ", i);
	}

    	return 0;
}