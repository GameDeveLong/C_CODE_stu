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
		string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜",
		"苹果", "香蕉", "苹果", "香蕉" };
		key_value::BSTree<string, int> countTree;

		for (const auto& str : arr)
		{
			// 先查找水果在不在搜索树中
			// 1、不在，说明水果第一次出现，则插入<水果, 1>
			// 2、在，则查找到的结点中水果对应的次数++
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