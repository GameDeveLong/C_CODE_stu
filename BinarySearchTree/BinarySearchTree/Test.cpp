#define _CRT_SECURE_NO_WARNINGS 1
#include"BinarySearchTree.h"

int main()
{/*
	key::BSTree<int> t;
	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
	for (auto e : a)
	{
		t.Insert(e);
	}
	t.Erase(8);
	t.InOrder();*/
		string arr[] = { "ƻ��", "����", "ƻ��", "����", "ƻ��", "ƻ��", "����",
		"ƻ��", "�㽶", "ƻ��", "�㽶" };
		key_value::BSTree<string, int> countTree;

		for (const auto& str : arr)
		{
			// �Ȳ���ˮ���ڲ�����������
			// 1�����ڣ�˵��ˮ����һ�γ��֣������<ˮ��, 1>
			// 2���ڣ�����ҵ��Ľ����ˮ����Ӧ�Ĵ���++
			//BSTreeNode<string, int>* ret = countTree.Find(str);
			auto ret = countTree.Find(str);
			if (ret == nullptr)
			{
				countTree.Insert(str, 1);
			}
			
		}
		countTree.InOrder();
		return 0;
}