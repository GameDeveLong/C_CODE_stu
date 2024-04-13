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
//// �ѵĹ���
//void HeapInit(Heap*hp);
//void HeapInitArray(Heap* hp,HPDataType*a,int n);
//
//// �ѵ�����
//void HeapDestory(Heap* hp);
//// �ѵĲ���
//void HeapPush(Heap* hp, HPDataType x);
//// �ѵ�ɾ��
//void HeapPop(Heap* hp);
//// ȡ�Ѷ�������
//HPDataType HeapTop(Heap* hp);
//// �ѵ����ݸ���
//int HeapSize(Heap* hp);
//// �ѵ��п�
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
//// ����󱣳������Ƕ�
//void HPPush(HP* php, HPDataType x);
//HPDataType HPTop(HP* php);
//
//// ɾ���Ѷ�������
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

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a,  int* pi);
// ����������
void BinaryTreeDestory(BTNode** root);
// �������ڵ����
int BinaryTreeSize(BTNode* root);
// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root);
// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k);
// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root);
// �������������
void BinaryTreeInOrder(BTNode* root);
// �������������
void BinaryTreePostOrder(BTNode* root);
// �������
void BinaryTreeLevelOrder(BTNode* root);
// �ж϶������Ƿ�����ȫ������
bool BinaryTreeComplete(BTNode* root);