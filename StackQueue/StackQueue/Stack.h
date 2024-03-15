#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDatatype;
typedef struct Stack
{
	STDatatype* a;
	int top;
	int capacity;
}ST;
//初始化栈
void STInit(ST* ps);
//出栈
void STPop(ST* ps);
//入栈
void STPush(ST* ps, STDatatype x);
//销毁栈
void STDestroy(ST* ps);
//监测栈是否为空
bool STEmpty(ST* ps);
// 获取栈中有效元素个数
int STSize(ST* ps);
// 获取栈顶元素
STDatatype STTop(ST* ps);