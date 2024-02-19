#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;//有效容量
	int capacity;//容量
}SL;

//初始化和销毁
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);//打印顺序表

void SLPushBack(SL*ps,SLDateType x);//尾插
void SLPushFront(SL*ps,SLDateType x);//头插

void SlPopBack(SL* ps);//尾删
void SlPopFront(SL* ps);//头删

//指定位置之前插入数据
//指定位置删除数据
void SLInsert(SL* ps, int pos, SLDateType x);
void SLErase(SL* ps, int pos, SLDateType x);