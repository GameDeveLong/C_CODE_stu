#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class Person
//{
//public:
//	// 进⼊校园/图书馆/实验室刷⼆维码等⾝份认证
//	void identity()
//	{
//		cout << "void identity()" << _name << endl;
//		cout << _age << endl;
//	}
//protected:
//	string _name = "张三"; // 姓名
//	string _address; // 地址
//	string _tel; // 电话
//	int _age = 18; // 年龄
//};
//class Student : public Person
//{
//public:
//	// 学习
//	void study()
//	{
//		// ...
//	}
//		protected:
//		int _stuid; // 学号
//};
//class Teacher : public Person
//{
//public:
//	// 授课
//	void teaching()
//	{
//		//...
//	}
//protected:
//	string title;
//};
//
//int main()
//{
//	Student s;
//	Teacher t;
//	s.identity();
//	t.identity();
//	return 0;
//}

//class Person
//{
//protected:
//	string _name = "小李子"; // 姓名
//	int _num = 111; // ⾝份证号
//};
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << _name << endl;
//		cout <<  Person::_num << endl;
//		cout << _num << endl;
//	}
//protected:
//	int _num = 999; // 学号
//};
//int main()
//{
//	Student s1;
//	s1.Print();
//	return 0;
//};

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//	int a;
//};
//class B : public A
//{
//public:
//	void fun(int a)
//	{
//		cout << "func(int i)" << endl;
//	}
//	int a;
//};
//int main()
//{
//	B b;
//	b.fun(1);
//	return 0;
//};
//

////定义一个类，不能被继承
//class Base
//{
//public:
//	void func5() { cout << "Base::func5" << endl; }
//protected:
//	int a = 1;
//private:
//	// C++98的方法
//	/*Base()
//	{}*/
//};
//class Derive :public Base
//{
//	void func4() { cout << "Derive::func4" << endl; }
//protected:
//	int b = 2;
//};
//
//int main()
//{
//	Base b;
//	Derive d;
//	return 0;
//}

// Tire(轮胎)和Car(⻋)更符合has-a的关系
class Tire {
protected:
	string _brand = "Michelin"; // 品牌
	size_t _size = 17; // 尺⼨
};
class Car {
protected:
	string _colour = "⽩⾊"; // 颜⾊
	string _num = "陕ABIT00"; // ⻋牌号
	Tire _t1; // 轮胎
	Tire _t2; // 轮胎
	Tire _t3; // 轮胎
	Tire _t4; // 轮胎
};
class BMW : public Car {
public:
	void Drive() { cout << "好开-操控" << endl; }
};

// Car和BMW/Benz更符合is-a的关系
class Benz : public Car {
public:
	void Drive() { cout << "好坐-舒适" << endl; }
};

// stack和vector的关系，既符合is-a，也符合has-a
template<class T>
class stack : public vector<T>
{};
template<class T>
class stack
{
public:
	vector<T> _v;
};

int main()
{
	return 0;
}