#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////���0��100000֮������С�ˮ�ɻ������������
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 100000; i++)
//	{
//		if (i > 100 && i <= 999)
//		{
//			  Getmath(i);			
//		}
//		else if (i > 1000 && i <= 9999)
//		{
//			Getmath2(i);
//		}
//		else if (i > 10000 && i < 100000)
//		{
//			Getmath3(i);
//		}
//		
//	}
//	return 0;
//}
//
////int main()
////{
////	
////	int i = 14555;
////    int n = i % 10;//��λ
////    int j = i % 100 / 10;//ʮλ
////    int k = i / 100 % 10;//��λ
////    int m = i / 1000 % 10;//ǧλ
////    int g = i / 10000;
////		printf("%d\n", n);
////		printf("%d\n", j);
////		printf("%d\n", k);
////		printf("%d\n", m);
////		printf("%d\n", g);
////	return 0;
////
////}


//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1. ���ж����ֵ�λ��
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. ����ÿһλ�Ĵη���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. �ж�
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}
