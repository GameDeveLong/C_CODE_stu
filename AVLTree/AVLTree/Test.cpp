#define _CRT_SECURE_NO_WARNINGS 1
#include"AVLTree.h"
#include<vector>
void TestAVLTree1()
{
	AVLTree<int, int> t;
	// ����Ĳ�������
	int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
	// ����Ĵ���˫�������Ĳ�������
	//int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };

	for (auto e : a)
	{
		t.Insert({ e, e });
	}

	t.InOrder();
	cout << t.IsBalanceTree() << endl;
}
// ����һ�����ֵ������ƽ�⣬˳�����һ�¸߶Ⱥ����ܵ�
void TestAVLTree2()
{
	const int N = 1000000;
	vector<int> v;
	v.reserve(N);
	srand(time(0));
	for (size_t i = 0; i < N; i++)
	{
		v.push_back(rand() + i);
	}

	size_t begin2 = clock();
	AVLTree<int, int> t;
	for (auto e : v)
	{
		t.Insert(make_pair(e, e));
	}
	size_t end2 = clock();

	cout << "Insert:" << end2 - begin2 << endl;
	cout << t.IsBalanceTree() << endl;

	cout << "Height:" << t.Height() << endl;
	cout << "Size:" << t.Size() << endl;

	size_t begin1 = clock();
	// ȷ���ڵ�ֵ
	for (auto e : v)
	{
		t.Find(e);
	}
	// ���ֵ
	/*for (size_t i = 0; i < N; i++)
	{
		t.Find((rand() + i));
	}*/
	size_t end1 = clock();
	cout << "Find:" << end1 - begin1 << endl;
}
int main()
{
	//TestAVLTree1();
	TestAVLTree2();
	return 0;
}