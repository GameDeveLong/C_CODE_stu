#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"


//void HeapSort(int* a, int n) {
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AjustDown(a, n, i);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//		AjustDown(a, end, 0);
//		end--;
//	}
//}
//int main()
//{
//	int a[] = { 20,60,100,50,99,10 };
//	//Heap hp;
//	//HeapInit(&hp);
//	//for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	//{
//	//	HeapPush(&hp, a[i]);
//	//}
//	////printf("%d\n", HeapTop(&hp));
//	//while (!HeapEmpty(&hp))
//	//{
//	//	printf("%d\n", HeapTop(&hp));
//	//	HeapPop(&hp);
//	//}
//	//HeapDestory(&hp);
//	HeapSort(a, sizeof(a) / sizeof(int));//升序 大堆
//	return 0;
//}


//void CreateNDate()
//{
//	// 造数据
//	int n = 10000;
//	srand(time(0));
//	const char* file = "data.txt";
//	FILE* fin = fopen(file, "w");
//	if (fin == NULL)
//	{
//		perror("fopen error");
//		return;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		int x = rand() % 1000000;
//		fprintf(fin, "%d\n", x);
//	}
//
//	fclose(fin);
//}
//void topk()
//{
//	printf("请输入k：>");
//	int k = 0;
//	scanf("%d", &k);
//
//	const char* file = "data.txt";
//	FILE* fout = fopen(file, "r");
//	if (fout == NULL)
//	{
//		perror("fopen error");
//		return;
//	}
//
//	int val = 0;
//	int* minheap = (int*)malloc(sizeof(int) * k);
//	if (minheap == NULL)
//	{
//		perror("malloc error");
//		return;
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		fscanf(fout, "%d", &minheap[i]);
//	}
//
//	// 建k个数据的小堆
//	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(minheap, k, i);
//	}
//
//	int x = 0;
//	while (fscanf(fout, "%d", &x) != EOF)
//	{
//		// 读取剩余数据，比堆顶的值大，就替换他进堆
//		if (x > minheap[0])
//		{
//			minheap[0] = x;
//			AdjustDown(minheap, k, 0);
//		}
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", minheap[i]);
//	}
//
//	fclose(fout);
//
//}
//int main()
//{
//	//CreateNDate();
//	topk();
//
//	return 0;
//}

//typedef struct BinTreeNode
//{
//	struct BinTreeNode* left;
//	struct BinTreeNode* right;
//	int val;
//}BTNode;

BTNode* BuyNode(int val)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->val = val;
	newnode->left = NULL;
	newnode->right = NULL;
}
BTNode* CreatTree()
{
	BTNode* n1 = BuyNode(1);
	BTNode* n2 = BuyNode(2);
	BTNode* n3 = BuyNode(3);
	BTNode* n4 = BuyNode(4);
	BTNode* n5 = BuyNode(5);
	BTNode* n6 = BuyNode(6);
	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;
	return n1;
}

//二叉树的遍历方法
//前序
void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}
//中序
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}
//后序
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);
}
int TreeSize(BTNode*root)//节点的个数
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right)+1;
}

int main()
{
	char a[100] = { 'A','B','#','#','E','#','H','#','#','C','F','#','#','G','#','#'};
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, &i);
	BTNode* root1 = CreatTree();
	//printf("%d\n", BinaryTreeLevelKSize(root, 3));
	//printf("%p\n", BinaryTreeFind(root, 2));
	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);

	printf("BinaryTreeComplete:%d\n", BinaryTreeComplete(root));
	return 0;
}