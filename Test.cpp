#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
#include"RBTree.h"
void TestRBTree1()
{
	RBTree<int, int> r;
	// ����Ĳ�������
	//int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
	// ����Ĵ���˫�������Ĳ�������
	int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };

	for (auto e : a)
	{
		r.Insert({ e, e });
	}

	r.InOrder();
	cout << r.IsBalance() << endl;
}

void TestAVLTree2()
{
	const int N = 100000;
	vector<int> v;
	v.reserve(N);
	srand(time(0));
	for (size_t i = 0; i < N; i++)
	{
		v.push_back(rand() + i);
	}	
	size_t begin2 = clock();
	RBTree<int, int> r;
	for (auto e : v)
	{
		r.Insert(make_pair(e, e));
	}
	size_t end2 = clock();
	cout << "Insert:" << end2 - begin2 << endl;
	cout << r.IsBalance() << endl;
	cout << "Height:" << r.Height() << endl;
	cout << "Size:" << r.Size() << endl;
	size_t begin1 = clock();
	 //ȷ���ڵ�ֵ
	for (auto e : v)
	{
	  r.Find(e);
	}
	// ���ֵ
	for (size_t i = 0; i < N; i++)
	{
		r.Find((rand() + i));
	}
	size_t end1 = clock();
	cout << "Find:" << end1 - begin1 << endl;
}
int main()
{
	TestAVLTree2();

	return 0;
}