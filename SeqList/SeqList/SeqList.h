#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	int size;//��Ч����
	int capacity;//����
}SL;

//��ʼ��������
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);//��ӡ˳���

void SLPushBack(SL*ps,SLDateType x);//β��
void SLPushFront(SL*ps,SLDateType x);//ͷ��

void SlPopBack(SL* ps);//βɾ
void SlPopFront(SL* ps);//ͷɾ

//ָ��λ��֮ǰ��������
//ָ��λ��ɾ������
void SLInsert(SL* ps, int pos, SLDateType x);
void SLErase(SL* ps, int pos, SLDateType x);