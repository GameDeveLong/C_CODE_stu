#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
//void slistTest01()
//{
//	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTDataType));
//	node1->data = 1;
//	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTDataType));
//	node2->data = 2;
//	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTDataType));
//	node3->data = 3;
//	SLTNode* node4= (SLTNode*)malloc(sizeof(SLTDataType));
//	node4->data = 4;
//	
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//
//	SLTNode* plist = node1;
//	SLTPrint(plist);
//}
void slistTest02() {
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPrint(plist);
	/*SLTPushFront(&plist, 5);
	SLTPrint(plist);
	SLTPushBack(&plist, 7);
	SLTPrint(plist);*/
	/*SLTPopBack(&plist);
	SLTPrint(plist);*/
	
}
void slistTest03() {
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	//SLTPrint(plist);
	/*SLTPopFront(&plist);
	SLTPrint(plist);*/
	//SLTNode* FindRet = SLTFind(&plist,3);
	/*if (FindRet) {
		printf("’“µΩ¡À");
	}else
	printf("Œ¥’“µΩ");*/
	/*SLTInsert(&plist, FindRet, 100);
	SLTPrint(plist);*/
	/*SLTInsertAfter(FindRet, 100);
	SLTPrint(plist);*/

	/*SLTErase(&plist, FindRet);
	SLTPrint(plist);*/
	//SLTEraseAfter(FindRet);
	//SLTPrint(plist);
	SListDesTroy(&plist);
}
int main()
{
	//slistTest01();
	//slistTest02();
	slistTest03();
	return 0;
}