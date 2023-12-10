#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30][30] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("%d ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//				printf("%d ", arr[i][j]);
//			}
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    char* str3 = "hello bit.";
//    char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}


int main()
{
	char* ch = "abcd";
	printf("%s\n", ch);
}