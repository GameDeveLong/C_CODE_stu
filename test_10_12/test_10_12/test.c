//��forѭ��ʵ��һ��һ�ٵ��۴����
#include<stdio.h>
//int main()
//{
//	int i=0;
//	int sum=0;
//	for (i = 0; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("һ��һ�ٵ��ۼ����Ϊ%d", sum);
//	return 0;
//}
//��if������ж�����Ƿ�Ϊ�����
//���������������1.�ܱ�4�����������ܱ�100����  2.���Ա�400������
int main()
{
	int year = 0;
	printf("���������");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year & 100 != 100) || (year % 400 == 0));
	{
		printf("����������%");
	}

	return 0;
}