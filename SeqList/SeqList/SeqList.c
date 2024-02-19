#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"
void SLInit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void SLPrint(SL* ps)
{
	for (int i = 0;i<ps->size;i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL *ps)
{
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDateType* tmp = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}
void SLPushBack(SL* ps, SLDateType x)//Î²²å
{
	assert(ps);
	//¿Õ¼ä²»¹»
	SLCheckCapacity(ps);
	//¿Õ¼ä×ã¹»
	ps->a[ps->size++] = x;
}
void SLPushFront(SL* ps, SLDateType x)//Í·²å
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = 0; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}

void SlPopBack(SL* ps)//Î²É¾
{
	assert(ps);
	assert(ps->size);
	ps->size--;
}
void SlPopFront(SL* ps)//Í·É¾
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}


void SLInsert(SL* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	SLCheckCapacity(ps);
	for (int i =ps->size;i>pos;i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->a[pos]++;
}
void SLErase(SL* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}