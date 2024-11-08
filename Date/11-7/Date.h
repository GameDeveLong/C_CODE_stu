#pragma once
#include<iostream>
using namespace std;
#include<assert.h>
class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in,  Date& d);

public:
	void Print() const;
	Date(int year = 1900, int month = 1, int day = 1);
	int GetMonthDay(int year, int month)
	{
		assert(month > 0 && month < 13);
		static int monthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year
			% 400 == 0)) )
		{
			return 29;
		}
		else
		{
			return monthDayArray[month];
		}
	}
	bool CheckDate();

	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;

	// d1 += 天数
	Date& operator+=(int day);
	Date operator+(int day) const;
	
	//d1-=天数
	Date& operator-=(int day);
	Date operator-(int day) const;

	// ++d1 -> d1.operator++()
	Date& operator++();
	// d1++ -> d1.operator++(0)
	// 为了区分，构成重载，给后置++，强⾏增加了⼀个int形参
	// 这⾥不需要写形参名，因为接收值是多少不重要，也不需要⽤
	// 这个参数仅仅是为了跟前置++构成重载区分
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	//d1-d2
	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);


