#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//
////int main(int argc, char* argv[])
////	{
////
////		string a = "hello world";
////
////		string b = a;
////
////		if (a.c_str() == b.c_str())
////
////		{
////
////			cout << "true" << endl;
////
////		}
////
////		else cout << "false" << endl;
////
////		string c = b;
////
////		c = "";
////
////		if (a.c_str() == b.c_str())
////
////		{
////
////			cout << "true" << endl;
////
////		}
////
////		else cout << "false" << endl;
////
////		a = "";
////
////		if (a.c_str() == b.c_str())
////
////		{
////
////			cout << "true" << endl;
////
////		}
////		else cout << "false" << endl;
////		return 0;
////	}
////
////
////int main()
////{
////	string str("Hello Bit.");
////
////	str.reserve(111);
////
////	str.resize(5);
////
////	str.reserve(50);
////
////	cout << str.size() << ":" << str.capacity() << endl;
////
////	return 0;
////
////}
//
//int main(int argc, char* argv[])
//{
//
//	string strText = "How are you?";
//
//	string strSeparator = " ";
//	string strResult;
//	int size_pos = 0;
//
//	int size_prev_pos = 0;
//
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//		size_prev_pos = ++size_pos;
//
//	}
//
//	if (size_prev_pos != strText.size())
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//	}
//
//	cout << endl;
//
//	return 0;
//}
//
//int main()
//{
//	char ch = '\0';
//
//	printf("%d", ch);
//	////cout << '\0';
//	return 0;
//}

#include"string.h"
namespace Mystring
{
	void test_string01()
	{
		string s1;
		string s2("hello world");
		for (size_t i = 0; i < s2.size(); i++)
		{
			s2[i] += 2;
		}
		cout << s2._src() << endl;
		for (auto r : s2)
		{
			cout << r;
		}
		string::iterator it = s2.begin();
		while (it != s2.end())
		{
			cout << *it << ' ';
			++it;
		}
	}

	void test_string02()
	{
		string s1("hello world");
		s1.insert(0, 'x');
		cout << s1._src() << endl;
	}
	void test_string03()
	{
		string s1("hello world");
		s1.insert(5, "xxx");
		cout << s1._src() << endl;
	}
	void test_string04()
	{
		string s1("hello world");
		string s2;
		cin>>s1 ;
		cout << s1 << endl;
	}
}
int main()
{
	Mystring::test_string04();
	//Mystring::test_string03();

	return 0;
}