#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef struct BinaryTreeNode* QDataType;
typedef struct QueueNode
{
	QDataType val;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* patil;
	int size;
}Queue;

//初始化
void QueueInit(Queue* pq);
//入队列
void QueuePush(Queue*pq, QDataType x);
//出队列
void QueuePop(Queue* pq);
// 获取队列头部元素
QDataType QueueFront(Queue* pq);
// 获取队列队尾元素
QDataType QueueBack(Queue* pq);
// 获取队列中有效元素个数
int QueueSize(Queue* pq);
//==// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
bool QueueEmpty(Queue* pq);
// 销毁队列
void QueueDestroy(Queue* pq);

