﻿#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
//链表的打印
void SLTPrint(SLTNode*phead);
//链表的头插和尾插
void SLTPushBack(SLTNode** pphead,SLTDataType x);
void SLTPushFront(SLTNode** pphead,SLTDataType x);
//链表的头删和尾删
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);
//查找
SLTNode* SLTFind(SLTNode** pphead, SLTDataType x);
//在指定位置之前插⼊数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//在指定位置之后插⼊数据
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
// 删除pos节点
void SLTErase(SLTNode** pphead, SLTNode * pos);
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos);
//销毁链表
void SListDesTroy(SLTNode** pphead);