#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;

//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDestroy(LTNode** pphead);

void LTPrint(LTNode*phead);
//头插和尾插
void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);
//尾删
void LTPopBack(LTNode* phead);
// 头删
void LTPopFront(LTNode* phead);
LTNode* LTFind(LTNode* phead, LTDataType x);
// 在pos位置之后插⼊数据
void LTInsert(LTNode* pos, LTDataType x);
void LTErase(LTNode* pos);