#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char *Find(char* str1, char* str2)
{
	char c[100] = { 0 };
	strcpy(c, str1);
	strcat(c, str1);
	char *p=strstr(c, str2);
	return p;
}
int main()
{
	char* p = Find("ABCD", "BCDA");
	if (p != NULL)
	{
		printf("%s\n", "是旋转后的结果");
	}
	return 0;
}
#include<stdio.h>
//杨氏矩阵
//int FindNum(int arr[3][3], int x, int y, int key)
//{
//	int i = 0;
//	int j = y - 1;
//	while (j >= 0 && i < x)
//	{
//		if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
//	int ret = FindNum(arr, 3, 3, 5);
//	if (ret==1)
//	{
//		printf("找到了\n");
//	}
//	else if (ret == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//void Findkiller()
//{
//	char killer = 'a';
//	for (; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//}
//int main()
//{
//	Findkiller();
//	return 0;
//}
#include<stdio.h>
//void YangHuiTriangle(int arr[][4], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//}
//void Print(int arr[][4], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	printf("\n");
//
//	}
//}
//	int main()
//	{
//		int arr[4][4] = { 0 };
//		YangHuiTriangle(arr, 4);
//		Print(arr, 4);
//		return 0;
//	};