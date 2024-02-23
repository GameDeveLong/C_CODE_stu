#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SLTPrint(SLTNode* phead) {
	SLTNode* pur = phead;
	while (pur)
	{
		printf("%d->", pur->data);
		pur = pur->next;
	}
	printf("NULL\n");
}
SLTNode*SLTBuyNode(SLTDataType x) {
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SLTPushBack(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//链表为空，新节点为phend
	if (*pphead == NULL) {
		*pphead = newnode;
		return;
	}
	//链表不为空
	SLTNode* ptail = *pphead;
	while (ptail->next)
	{
		ptail = ptail->next;
	}
	ptail->next = newnode;
}
void SLTPushFront(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SLTPopBack(SLTNode** pphead, SLTDataType x) {
	assert(pphead);
	assert(*pphead);
	if ((*pphead)->next==NULL) {
		free(*pphead);
		*pphead = NULL;
		return;
	}
	SLTNode* ptail = *pphead;
	SLTNode* prev = NULL;
	while (ptail->next)
	{
		prev = ptail;
		ptail = ptail->next;
	}
	prev->next = NULL;
	free(ptail);
	ptail = NULL;
}
void SLTPopFront(SLTNode** pphead) {
	assert(pphead);
	assert(*pphead);
	SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}

SLTNode* SLTFind(SLTNode** pphead, SLTDataType x) {
	SLTNode* pur = *pphead;
	while (pur)
	{
		if (pur->data == x) {
			return pur;
		}
		pur = pur->next;
	}
	return NULL;
}


void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x) {
	assert(pphead);
	assert(pos);
	assert(*pphead);
	SLTNode* newnode = SLTBuyNode(x);
	if (*pphead == pos) {
		SLTPushFront(pphead, x);
		return;
	}
	SLTNode* prev = *pphead;
	while (prev->next!=pos)
	{
		prev = prev->next;
	}
	prev->next = newnode;
	newnode->next = pos;
}


void SLTInsertAfter(SLTNode* pos, SLTDataType x) {
	assert(pos);

	SLTNode* newnode = SLTBuyNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** pphead, SLTNode* pos) {
	assert(pphead);
	assert(*pphead);
	assert(pos);
	if (*pphead == pos) {
		SLTPopFront(pphead);
		return;
	}
	SLTNode* prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void SLTEraseAfter(SLTNode* pos) {
	assert(pos);
	assert(pos->next);
	
	SLTNode* del = pos->next;
	pos->next = pos->next->next;
	free(del);
	del = NULL;
}

void SListDesTroy(SLTNode** pphead) {
	assert(pphead);
	assert(*pphead);

	SLTNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
}