#define _CRT_SECURE_NO_WARNINGS 1
//int lean_year(year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else	
//		return 0;	
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int r = lean_year(year);
//	if (r == 1)
//		printf("������");
//	else
//		printf("��������");
//	return 0;
//}

//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
//#include<stdio.h>
//void is_prime()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}if (flag == 1)
//			printf("%d ", i);
//	}
//}
//int main()
//{
//	is_prime();
//	return 0;
//}
// 
// 
//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include<stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int j = 0;
//	for(j=0;j<sz;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	int i = 0;
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);//������Ԫ��ȫΪ0
//	print(arr,sz);//��ӡ����ÿ��Ԫ��
//	reverse(arr,sz);//������������
//	return 0;
//}

//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>
int mul_table(int a)
{
	int i = 1;
	for (i = 1; i <= a; i++)
	{
		int j =1;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %d  ",j,i,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	mul_table(a);
	return 0;
}