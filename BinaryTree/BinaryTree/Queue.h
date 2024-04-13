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

//��ʼ��
void QueueInit(Queue* pq);
//�����
void QueuePush(Queue*pq, QDataType x);
//������
void QueuePop(Queue* pq);
// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* pq);
// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* pq);
// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq);
//==// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
bool QueueEmpty(Queue* pq);
// ���ٶ���
void QueueDestroy(Queue* pq);

