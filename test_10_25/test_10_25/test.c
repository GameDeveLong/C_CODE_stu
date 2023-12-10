#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	/*int arr[] = { 1,2, (3,4),5 };
//	printf("%d", sizeof(arr));*/
//
//	/*char ch[] = "h ";
//	int sz = sizeof(ch);
//	printf("%d ", sizeof(ch)/sizeof(ch[0]));
//	printf("%d ", sizeof(ch[0]));
//	printf("%d ", strlen(ch));*/
//	int arr[10];
//	int i = arr[2] * arr[1];
//
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10];
//	int sum = 0;
//	printf("请输入10个数字\n");
//	for (i = 0; i <10; i++)
//	{
//		printf("第%d个数字:",i+1);
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("平均值为=%d\n", sum / 10);
//	return 0;
//}



//#include<stdlib.h>
//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	int sz = sizeof(acX);
//	int sz1 = sizeof(acY);
//	int st = strlen(acX);
//	int st1 = strlen(acY);
//
//	printf("%d\n", sz);//8
//	printf("%d\n", st);//7
//	printf("%d\n", sz1);//7
//	printf("%d\n", st1);//33
//
//
//	return 0;
//}

//实现逆序输出
//i/*nt main()
//{
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}*/

//数组交换
#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[5] = "efgh";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//打印图案
//#include <stdio.h>
//int main()
//{
//    int a;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        {
//            for (j = 0; j < a; j++)
//            {
//                if (i == j || j == a - i - 1)
//
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//空心正方形图案
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        {
//            for (j = 0; j < a; j++)
//            {
//                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//矩阵转置
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int i, j;
//    int arr[10][10] = { 0 };
//    scanf("%d%d", &a, &b);
//    for (i = 0; i < a; i++)
//    {
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < b; i++)
//    {
//        for (j = 0; j < a; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

