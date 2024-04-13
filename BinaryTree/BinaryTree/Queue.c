#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"
	
//��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->patil = pq->phead = NULL;
	pq->size = 0;
}
//�����
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
	if (pq->patil) //��Ϊ�յ����
	{
		pq->patil->next = newnode;
		pq->patil = newnode;
	}
	else  //Ϊ�����
	{
		pq->phead = pq->patil = newnode;
	}
	pq->size++;
	
}
//������
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
	
// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead != NULL);
	return pq->phead->val;
}
// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->patil != NULL);
	return pq->patil->val;
}
// ��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* pq)
{
	assert(pq);

	return pq->size;
}
//==// �������Ƿ�Ϊ��
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;

}
// ���ٶ���
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