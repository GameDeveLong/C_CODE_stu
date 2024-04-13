//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//#include<time.h>
//typedef int HPDataType;
//typedef struct Heap
//{
//	HPDataType* a;
//	int size;
//	int capacity;
//}Heap;
//// 堆的构建
//void HeapInit(Heap*hp);
//void HeapInitArray(Heap* hp,HPDataType*a,int n);
//
//// 堆的销毁
//void HeapDestory(Heap* hp);
//// 堆的插入
//void HeapPush(Heap* hp, HPDataType x);
//// 堆的删除
//void HeapPop(Heap* hp);
//// 取堆顶的数据
//HPDataType HeapTop(Heap* hp);
//// 堆的数据个数
//int HeapSize(Heap* hp);
//// 堆的判空
//bool HeapEmpty(Heap* hp);
//void AdjustDown(HPDataType* a, int n, int parent);
//void AdjustUp(HPDataType* a, int child);
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
//
//typedef int HPDataType;
//
//typedef struct Heap
//{
//	HPDataType* a;
//	int size;
//	int capacity;
//}HP;
//
//void HPInit(HP* php);
//void HPInitArray(HP* php, HPDataType* a, int n);
//
//void HPDestroy(HP* php);
//// 插入后保持数据是堆
//void HPPush(HP* php, HPDataType x);
//HPDataType HPTop(HP* php);
//
//// 删除堆顶的数据
//void HPPop(HP* php);
//
//bool HPEmpty(HP* php);
//
//void AdjustUp(HPDataType* a, int child);
//void AdjustDown(HPDataType* a, int n, int parent);

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a,  int* pi);
// 二叉树销毁
void BinaryTreeDestory(BTNode** root);
// 二叉树节点个数
int BinaryTreeSize(BTNode* root);
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root);
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root);
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root);
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root);
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root);
// 判断二叉树是否是完全二叉树
bool BinaryTreeComplete(BTNode* root);