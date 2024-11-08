#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
//void Test01()
//{
//	Date d1(2024, 11,7);
//	//d1 -= 30000;
//	d1.Print();
//	cout << d1;
//}
void Test04()
{
	Date d1(2024, 10, 15);
	Date d2(2024, 11, 8);
	int n = d1 - d2;
	cout << d1 - d2<<endl;
}
void Test02()
{
	Date d1(2024, 11, 8);
	Date d2(2024, 11, 8);
	d1+=100000;
	d2-=10000;
	//d1.Print();
	d2.Print();
	//cout << d1;
}
void Test03()
{
	Date d1(2024, 11, 10);
	Date d2(2024, 11, 9);
	bool n = d1 > d2;
	cout << n;
}
int main()
{
	Test02();
	return 0;
}