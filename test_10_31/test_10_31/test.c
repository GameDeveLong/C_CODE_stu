#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//九九乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <=9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//打印x型
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)	
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j || (i + j) == n - 1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}printf("\n");
//	}
//
//	return 0;
//}

//打印空心正方形

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == 0 || i == n - 1)
//			{
//				printf("* ");
//			}
//			else if (j == 0 || j == n - 1)
//			{
//				printf("* ");
//			}
//			else
//				printf("  ");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//int main()
//{
//	int c = 1245 % 100;
//	printf("%d", c);
//	return 0;
//}

//
//判断元音还是辅音
#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

        //getchar();
        if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'I' || a == 'i' || a == 'o' || a == 'O' || a == 'U' || a == 'u')
        {
            printf("Vowel\n");

        }
        else
        {
            printf("Consonant\n");
        }
    
    return 0;
}