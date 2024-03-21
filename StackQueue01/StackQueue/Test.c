#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
#include"Queue.h"
//int main()
//{
//	ST s;
//	STInit(&s);
//	STPush(&s, 1);
//	STPush(&s, 2);
//	STPush(&s, 3);
//	STPush(&s, 4);
//	while (!STEmpty(&s))
//	{
//		int top = STTop(&s);
//		printf("%d ", top);
//		STPop(&s);
//	}
//	STDestroy(&s);
//	return 0;
//
//}

int main()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	} 
	QueueDestroy(&q);
	return 0;
}