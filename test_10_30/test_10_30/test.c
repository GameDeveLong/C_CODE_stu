#define _CRT_SECURE_NO_WARNINGS 1


//输入一个浮点数f, 表示华氏温度, 输出对应的摄氏温度c, c = 5 / 9 * (f - 32)
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
//牛牛有一个半径为 r 的圆，请你计算这个圆的面积。
//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	printf("%.2f", 3.14 * r * r);
//	return 0;
//}

//牛牛有一个阻值是 r1 和一个阻值 r2 的电阻，牛牛想知道这两个电阻并联后等效电阻是多少
//int main()
//{
//	float r1 = 0;
//	float r2 = 0;
//	scanf("%f %f", &r1, &r2);
//	float R = 1 / ((1 / r1) + (1 / r2));
//	printf("%.1f", R);
//	return 0;
//}

//牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴


//int main()
//{
//	int h = 0;//高
//	int r = 0;//底部半径
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

	//int hour = 0;//小时
	//int min = 0;//分钟
	//int time = 0;//总时间，单位：分钟
	//scanf("%d:%d %d", &hour,&min,&time);
	//int sum = hour * 60 + min + time;
	//printf("%02d,%02d", sum / 60 % 24, sum % 60);
	/*int a = 170 / 60;
	int b = a % 24;
	printf("%d",a );
	return 0;
}*/
	//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
	// 电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
	// 请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
	int main()
	{
		int n = 0;
		scanf("%d", &n);
		int num = n / 12*4;
		printf("%d", num + 2);
		return 0;
	}