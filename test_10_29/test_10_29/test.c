#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ú�����ɶ��ֲ���

int bin_search(int arr[], int right, int mid,int left, int key)
{
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = (left + right) / 2;
	int key = 0;//Ҫ���ҵ�����
	scanf("%d", &key);
	int r = bin_search(arr,right,mid,left,key);
	if (r == -1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d", r);
	}
	return 0;
}