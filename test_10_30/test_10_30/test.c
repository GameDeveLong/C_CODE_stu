#define _CRT_SECURE_NO_WARNINGS 1


//����һ��������f, ��ʾ�����¶�, �����Ӧ�������¶�c, c = 5 / 9 * (f - 32)
#include<stdio.h>
//int main()
//{
//	float f = 0;
//	float c = 0;
//	scanf("%f", &f);
//	c = 5.0 / 9 * (f - 32);
//	printf("%.3f", c);
//
//	return 0;
//}
//ţţ��һ���뾶Ϊ r ��Բ������������Բ�������
//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	printf("%.2f", 3.14 * r * r);
//	return 0;
//}

//ţţ��һ����ֵ�� r1 ��һ����ֵ r2 �ĵ��裬ţţ��֪�����������貢�����Ч�����Ƕ���
//int main()
//{
//	float r1 = 0;
//	float r2 = 0;
//	scanf("%f %f", &r1, &r2);
//	float R = 1 / ((1 / r1) + (1 / r2));
//	printf("%.1f", R);
//	return 0;
//}

//ţţ�ڿ��ˣ�Ҫ��10��ˮ���ܽ�ʣ�������ֻ��һ���� h ���ף�����뾶�� r ���׵�ˮ����ţţ����Ҫ�ȶ��ٱ�ˮ���ܽ��


//int main()
//{
//	int h = 0;//��
//	int r = 0;//�ײ��뾶
//	scanf("%d %d", &h, &r);
//	float v = (3.14 * h * r * r);
//	int n = 10000 / v;
//	if (n == 1000 / v)
//	{
//		printf("%d", n);
//	}
//	else
//		printf("%d", n + 1);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int d = b - a;
//	printf("%d", b + d);
//}


//int main()
//{
//	int r = 0;
//	scanf("%d", &r);
//	double v = 4.0 / 3 * r*r*r * 3.14;
//	printf("%.2f", v);
//	return 0;
//}
// 
//int main()
//{

	//int hour = 0;//Сʱ
	//int min = 0;//����
	//int time = 0;//��ʱ�䣬��λ������
	//scanf("%d:%d %d", &hour,&min,&time);
	//int sum = hour * 60 + min + time;
	//printf("%02d,%02d", sum / 60 % 24, sum % 60);
	/*int a = 170 / 60;
	int b = a % 24;
	printf("%d",a );
	return 0;
}*/
	//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
	// ����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
	// �����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
	int main()
	{
		int n = 0;
		scanf("%d", &n);
		int num = n / 12*4;
		printf("%d", num + 2);
		return 0;
	}