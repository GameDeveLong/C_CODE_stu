#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
	
//初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->patil = pq->phead = NULL;
	pq->size = 0;
}
//入队列
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->val=x;
	newnode->next = NULL;
	if (pq->patil) //不为空的情况
	{
		pq->patil->next = newnode;
		pq->patil = newnode;
	}
	else  //为空情况
	{
		pq->phead = pq->patil = newnode;
	}
	pq->size++;
	
}
//出队列
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->phead != NULL);
	if (pq->phead->next == NULL)
	{
		free(pq->patil);
		pq->patil = pq->phead = NULL;
	}
	else
	{
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}

	pq->size--;
}
	
// 获取队列头部元素
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead != NULL);
	return pq->phead->val;
}
// 获取队列队尾元素
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->patil != NULL);
	return pq->patil->val;
}
// 获取队列中有效元素个数
int QueueSize(Queue* pq)
{
	assert(pq);

	return pq->size;
}
//==// 检测队列是否为空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;

}
// 销毁队列
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = pq->patil = NULL;
	pq->size = 0;
}