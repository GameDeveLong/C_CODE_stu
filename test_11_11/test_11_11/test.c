#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int len_strlen(char* c)
//{
//	int count = 0;
//	while (*c != '\0')
//	{
//		count++;
//		c++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int len = len_strlen("abcdec");
//	printf("%d\n", len);
//	return 0;
//}
//×Ö·û´®×óÐý
#include<stdio.h>
#include<string.h>
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	char temp = arr[0];
//	k %= len;
//	int i = 0;
//	for (i = 0; i <k; i++)
//	{
//		char temp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = temp;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}



//Ã°ÅÝÅÅÐò

void Bubbles(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)//
	{
		for (j = 0; j<sz-1-i ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main()
{
	int i = 0;
	int arr[] = {5,1,7,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubbles(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}