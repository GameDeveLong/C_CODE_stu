#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


void STInit(ST* ps) {
	assert(ps);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
void STDestroy(ST* ps) {
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
void STPush(ST* ps, STDatatype x) {
	assert(ps);

	if (ps->top == ps->capacity)
	{
		int  newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDatatype* tmp = (STDatatype*)realloc(ps->a, newcapacity * sizeof(STDatatype));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			return;
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top]=x;
	ps->top++;
}
void STPop(ST* ps) {
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}
int STSize(ST* ps) {
	assert(ps);
	return ps->top--;
}
bool STEmpty(ST* ps) {
	assert(ps);
	return ps->top == 0;
}
STDatatype STTop(ST* ps) {
	assert(ps);
	assert(!STEmpty(ps));
	return ps->a[ps->top - 1];
}
