#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	if (!CheckDate())
	{
		cout << "日期错误" << endl;
	}
};
void Date::Print() const
{
	cout << _year << "/" << _month << "/" << _day << endl;
}
bool Date::CheckDate()
{
	if (_month > 0 && _month < 13 && _day>0 && _day < GetMonthDay(_year,_month))
	{
		return true;
	}
	else
	{
		return false;
	}
}
// d1 += 天数
Date& Date::operator+=(int day)
{
	_day += day;
	while(_day >GetMonthDay(_year,_month) )
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day) const
{
	Date tmp = *this;
	tmp += day;
	return tmp;
}
//Date& Date::operator-=(int day)
//{
//	if (day < 0)
//	{
//		return *this += -day;
//	}
//	_day -= day;
//	while (_day<=0)
//	{
//		--_month;
//		if (_month == 0)
//		{
//			_month = 12;
//			--_year;
//		}
//		_day += GetMonthDay(_year, _month);
//	}
//	return *this;
//}
Date Date::operator-(int day) const
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}
bool Date::operator<(const Date& d) const
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year)

	{
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}
	return false;
}
bool Date::operator==(const Date& d) const
{
	return _year == d._year && _month == d._month && _day == d._day;
}
bool Date::operator<=(const Date& d) const
{
	return  *this < d || *this == d;
}
bool Date::operator>(const Date& d) const
{
	return !(*this<=d);
}
bool Date::operator>=(const Date& d) const
{
	return !(*this<d);
}

bool Date::operator!=(const Date& d) const
{
	return !(*this == d);
}
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return out;
}
istream& operator>>(istream& in, Date& d)
{
	cout << "请输入日期->";
	in >> d._year >> d._month >> d._day;
	while (1)
	{
		if (!d.CheckDate())
		{
			cout << "日期错误";
			d.Print();
			cout << "重新输入";
		}
		else
		{
			break;
		}
	}
	return in;
}
int Date::operator-(const Date&d )
{
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}
	int n = 0;
	while (min != max)
	{
		++n;
		++min;
	}
	return n * flag;
}
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}