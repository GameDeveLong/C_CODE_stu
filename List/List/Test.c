#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

void ListTest01() {
	/*LTNode* plist = NULL;
	LTInit(&plist);*/
	LTNode* plist = LTInit();
	LTPushBack(plist,1);
	LTPushBack(plist,2);
	LTPushBack(plist,3);
	LTPushBack(plist,4);
	/*LTPushFront(plist, 7);
	LTPushFront(plist, 8);
	LTPushFront(plist, 9);*/
	/*LTPopBack(plist);
	LTPopFront(plist);*/
	LTPrint(plist);
	LTNode* findRet = LTFind(plist, 2);
	/*if (findRet == NULL) {
		printf("Œ¥’“µΩ\n");
	}
	else {
		printf("’“µΩ¡À\n");
	}*/
	//LTInsert(findRet, 5);
	//LTErase(findRet);
	LTDestroy(plist);
	LTPrint(plist);
}
int main()
{
	ListTest01();
	return 0;
}