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
	int n = i%10;//��λ
	int j = i%100/10;//ʮλ
	int k = i/100;//��λ
	if (i == (k * k * k) + (j * j * j) + (n * n * n))
	{
		return i;
	}
}
//���0��100000֮������С�ˮ�ɻ������������
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
//		int n = i % 10;//��λ
//		int j = i % 100 / 10;//ʮλ
//		int k = i / 100;//��λ
//		if (i == (k * k * k) + (j * j * j) + (n * n * n))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//2+22+222+2222+22222֮��
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

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
#include<stdio.h>
int main()
{
	int n = 20;
	int a = 20 / 1;//�������Ժȶ���
	int b = a / 2;//��ƿ���Ի�����ˮ����
	int sum = a + b;
	printf("һ�����Ժ�%dƿ", sum);
	return 0;
}