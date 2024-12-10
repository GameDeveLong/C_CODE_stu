#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class Person {
//public:
//	virtual void BuyTicket() { cout << "买票-全价" << endl; }
//};
//
//class Student : public Person {
//public:
//	virtual void BuyTicket() { cout << "买票-打折" << endl; }
//};
//
//void Func(Person* ptr)
//{
//	ptr->BuyTicket();
//}
//
//int main()
//{
//	Person p;
//	Student s;
//
//	Func(&p);
//	Func(&s);
//	return 0;
//}


//class Animal
//{
//public:
//	virtual void talk() const
//	{
//
//	}
//};
//class Cat:public Animal
//{
//public:
//	virtual void talk() const
//	{
//		cout << "喵喵" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	virtual void talk() const
//	{
//		cout << "旺旺" << endl;
//	}
//};
//void letsHear(const Animal& animal)
//{
//	animal.talk();
//}
//int main()
//{
//	Dog d;
//	Cat c;
//	letsHear(d);
//	letsHear(c);
//
//	return 0;
//}
//
//class A
//{
//public:
//	virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
//	virtual void test() { func(); }
//};
//class B : public A
//{
//public:
//	void func(int val = 0) { std::cout << "B->" << val << std::endl; }
//};
//int main(int argc, char* argv[])
//{
//	B* p = new B;
//	p->test();
//	return 0;
//}

class A
{
public:
	virtual ~A()
	{
		cout << "~A()" << endl;
	}
};
class B : public A {
public:
	//构成重写
	virtual ~B()
	{
		cout << "~B()->delete:" << _p << endl;
		delete _p;
	}
protected:
	int* _p = new int[10];
};
// 只有派生类Student的析构函数重写了Person的析构函数，下面的delete对象调用析构函数，才能
//构成多态，才能保证p1和p2指向的对象正确的调用析构函数。
int main()
{
	A* p1 = new A;
	A* p2 = new B;
	delete p1;
	delete p2;
	return 0;
}