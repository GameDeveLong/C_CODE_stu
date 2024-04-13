#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
#include"Queue.h"
//////void HeapInit(Heap* hp) {
//////	assert(hp);
//////	hp->a = NULL;
//////	hp->capacity = 0;
//////	hp->size = 0;
//////}
////void HeapInitArray(Heap* hp, HPDataType* a, int n) {
////	assert(hp);
////	hp->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
////	hp->capacity = n;
////	hp->size = n;
////	memcpy(hp->a, a, sizeof(HPDataType)*n);
////
////	for (int i = 1; i < hp->size; i++)
////	{
////		AdjustDown(hp->a, hp->size, i);
////	}
////}
////void HeapDestory(Heap* hp) {
////	assert(hp);
////	free(hp->a);
////	hp->a = NULL;
////	hp->capacity = 0;
////	hp->size = 0;
////}
//////交换函数
////void Swap(HPDataType* px, HPDataType* py)
////{
////	HPDataType tmp = *px;
////	*px = *py;
////	*py = tmp;
////}
//////向上调整
////void AjustUp(HPDataType* a,int child )
////{
////	int parent = (child - 1) / 2;
////	while(child>0)
////	{
////		if (a[child] < a[parent])//小堆
////		{
////			Swap(&a[child], &a[parent]);
////			child = parent;
////			parent = (parent - 1) / 2;
////		}
////		else
////		{
////			break;
////		}
////	}
////
////}
////void HeapPush(Heap* hp, HPDataType x) {
////	assert(hp);
////	if (hp->size == hp->capacity)
////	{
////		size_t newcapacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
////		HPDataType* tmp = realloc(hp->a, sizeof(HPDataType)*newcapacity);
////		if (tmp == NULL)
////		{
////			perror("realloc fail");
////			return;
////		}
////		hp->a = tmp;
////		hp->capacity = newcapacity;
////	}
////	hp->a[hp->size] = x;
////	hp->size++;
////	AjustUp(hp->a, hp->size - 1);
////}
//////向下调整
//////void AdjustDown(HPDataType *a, int n, int parent) {
//////	int child = parent * 2 + 1;//假设左子树小于右子树
//////	while (child<n)
//////	{
//////		if (child+1 < n && a[child + 1] < a[child])
//////		{
//////			child++;
//////		}
//////		if (a[child] < a[parent])
//////		{
//////			Swap(&a[child], &a[parent]);
//////			parent = child;
//////			child = parent * 2 + 1;
//////		}
//////		else
//////		{
//////			break;
//////		}
//////	}
//////}
////void AdjustDown(HPDataType* a, int n, int parent)
////{
////	int child = parent * 2 + 1;
////	while (child < n)
////	{
////		// 假设法，选出左右孩子中小的那个孩子
////		if (child + 1 < n && a[child + 1] < a[child])
////		{
////			++child;
////		}
////
////		if (a[child] < a[parent])
////		{
////			Swap(&a[child], &a[parent]);
////			parent = child;
////			child = parent * 2 + 1;
////		}
////		else
////		{
////			break;
////		}
////	}
////}
////void HeapPop(Heap* hp) {
////	assert(hp);
////	assert(hp->size > 0);
////
////	Swap(&hp->a[0], &hp->a[hp->size - 1]);
////	hp->size--;
////	AdjustDown(hp->a, hp->size, 0);
////
////}
////HPDataType HeapTop(Heap* hp) {
////	assert(hp);
////	assert(hp->size > 0);
////	return hp->a[0];
////}
////int HeapSize(Heap* hp)
////{
////	assert(hp);
////	return hp->size;
////}
////bool HeapEmpty(Heap* hp) {
////	assert(hp);
////	return hp->size == 0;
////}
//#include"Heap.h"
//
//void HPInit(HP* php)
//{
//	assert(php);
//	php->a = NULL;
//	php->size = 0;
//	php->capacity = 0;
//}
//
//void HPInitArray(HP* php, HPDataType* a, int n)
//{
//	assert(php);
//
//	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
//	if (php->a == NULL)
//	{
//		perror("malloc fail");
//		return;
//	}
//	memcpy(php->a, a, sizeof(HPDataType) * n);
//	php->capacity = php->size = n;
//
//	// 向上调整，建堆 O(N*logN)
//	//for (int i = 1; i < php->size; i++)
//	//{
//	//	AdjustUp(php->a, i);
//	//}
//
//	// 向下调整，建堆 O(N)
//	for (int i = (php->size - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(php->a, php->size, i);
//	}
//}
//
//void HPDestroy(HP* php)
//{
//	assert(php);
//	free(php->a);
//	php->a = NULL;
//	php->capacity = 0;
//	php->size = 0;
//}
//
//void Swap(HPDataType* px, HPDataType* py)
//{
//	HPDataType tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//void AdjustUp(HPDataType* a, int child)
//{
//	int parent = (child - 1) / 2;
//	//while (parent >= 0)
//	while (child > 0)
//	{
//		if (a[child] > a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			child = parent;
//			parent = (parent - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//// 时间复杂度：
//void HPPush(HP* php, HPDataType x)
//{
//	assert(php);
//
//	if (php->size == php->capacity)
//	{
//		size_t newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
//		HPDataType* tmp = realloc(php->a, sizeof(HPDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			return;
//		}
//		php->a = tmp;
//		php->capacity = newCapacity;
//	}
//
//	php->a[php->size] = x;
//	php->size++;
//
//	AdjustUp(php->a, php->size - 1);
//}
//
//HPDataType HPTop(HP* php)
//{
//	assert(php);
//
//	return php->a[0];
//}
//
//void AdjustDown(HPDataType* a, int n, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		// 假设法，选出左右孩子中小的那个孩子
//		if (child + 1 < n && a[child + 1] > a[child])
//		{
//			++child;
//		}
//
//		if (a[child] > a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//// 时间复杂度：logN
//void HPPop(HP* php)
//{
//	assert(php);
//	assert(php->size > 0);
//
//	Swap(&php->a[0], &php->a[php->size - 1]);
//	php->size--;
//
//	AdjustDown(php->a, php->size, 0);
//}
//
//
//bool HPEmpty(HP* php)
//{
//	assert(php);
//
//	return php->size == 0;
//}
//
BTNode* BinaryTreeCreate(BTDataType* a,  int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->val = a[*pi];
	(*pi)++;
	root->left = BinaryTreeCreate(a,pi);
	root->right = BinaryTreeCreate(a,pi);
	return root;
}
void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
	{
		return;
	}
	BinaryTreeDestory((*root)->left);
	BinaryTreeDestory((*root)->right);
	free(*root);
}
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL);
	    return 1;
		return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);

}
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)//为空，返回0
		return 0;
	if (k == 1)
		return 1;
	//不为空，且k > 1
	return BinaryTreeLevelKSize(root->left, k - 1)
		+ BinaryTreeLevelKSize(root->right, k - 1);
}
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%c ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->val);
	InOrder(root->right);
}
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->val);
}
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->val == x)
		return root;
	BTNode* ret1 = BinaryTreeFind(root->left, x);
	if (ret1)
		return ret1;
	BTNode* ret2 = BinaryTreeFind(root->right, x);
	if (ret2)
		return ret2;
	return NULL;
}
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	  QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->val);
		if (front->left)
			QueuePush(&q, front->left);
		if (front->right)
			QueuePush(&q, front->right);
	}
	printf("\n");
	QueueDestroy(&q);
}
bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front == NULL)
		{
			break;
		}
		QueuePush(&q,front->left);
		QueuePush(&q,front->right);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front)
		{
			QueueEmpty(&q);
			return false; 
		}
	}

	QueueDestroy(&q);
	return true;

}