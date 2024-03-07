#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

//void LTInit(LTNode** pphead) {
//	*pphead = (LTNode*)malloc(sizeof(LTNode));
//	if (*pphead == NULL) {
//		perror("malloc fail!");
//		exit(1);
//	}
//	(*pphead)->data = -1;
//	(*pphead)->next = (*pphead)->prev = *pphead;
//}
void LTPrint(LTNode* phead) {
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur!=phead)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("\n");
}

LTNode* LTBuyNode(LTDataType x) {

	LTNode*newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("malloc fail!");
		exit(1);
	}
	newnode->data = x;
	newnode->next = newnode->prev = newnode;
	return newnode;
}
void LTDestroy(LTNode* phead) {
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	free(pcur);
	phead = NULL;
}

LTNode* LTInit() {
	LTNode* phead = LTBuyNode(-1);
	return phead;
}
void LTPushBack(LTNode* phead, LTDataType x) {
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead;
	newnode->prev = phead->prev;

	phead->prev->next = newnode;
	phead->prev = newnode;

}
void LTPushFront(LTNode* phead, LTDataType x) {
	LTNode* newnode = LTBuyNode(x);
	newnode->next = phead->next;
	newnode->prev = phead;

	phead->next = newnode;
	phead->next->prev = newnode;
   
}

// 
void LTPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead);
	LTNode* del = phead->prev;
	LTNode* prev = del->prev;

	prev->next = phead;
	phead->prev = prev;
	free(del);
	del = NULL;
}
// 
void LTPopFront(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead);
	LTNode* del = phead->next;
	LTNode* next = del->next;
	next->prev = phead;
	phead->next = next;
	free(del);
	del = NULL;
}
LTNode* LTFind(LTNode* phead, LTDataType x) {
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur!=phead)
	{
		if (pcur->data == x) {
			return pcur;  //这里return错啦~，x类型是LTDataType
		}
		pcur = pcur->next;
	}
	return NULL;
}
void LTInsert(LTNode* pos, LTDataType x) {
	assert(pos);
	LTNode* newnode = LTBuyNode(x);
	newnode->next = pos->next;  //这里都是无法读取的
	newnode->prev = pos;
	pos->next->prev = newnode;
	pos->next = newnode;
}
void LTErase(LTNode* pos) {
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
	pos = NULL;
}