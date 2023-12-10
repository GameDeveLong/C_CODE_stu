#define _CRT_SECURE_NO_WARNINGS 1
//二分法查找有序数组
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int left = 0;//最左边元素的下标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;//最右边元素的下标
//	int k = 0;//要查找的元素
//	scanf("%d",&k);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}if (left == right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}


//牛客有序序列合并
#include <stdio.h>
int main()
{
    int m, n, i, j = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr1[10000] = { 0 };
    int sz = n + m;
    for (i = 1; i <= sz; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 1; i <= sz; i++)
    {
        for (j = 1; j <= sz - i; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    for (i = 1; i < sz + 1; i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}