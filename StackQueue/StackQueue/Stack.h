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
//��ʼ��ջ
void STInit(ST* ps);
//��ջ
void STPop(ST* ps);
//��ջ
void STPush(ST* ps, STDatatype x);
//����ջ
void STDestroy(ST* ps);
//���ջ�Ƿ�Ϊ��
bool STEmpty(ST* ps);
// ��ȡջ����ЧԪ�ظ���
int STSize(ST* ps);
// ��ȡջ��Ԫ��
STDatatype STTop(ST* ps);