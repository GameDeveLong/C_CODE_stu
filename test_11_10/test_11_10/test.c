#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };//20个字节
//    short* p = (short*)arr;//2个字节
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int *pa = p + 1;
//	printf("%p\n", p);
//	printf("%p\n", pa);
//
//	return 0;
//}

//int main()
//{
//	
//	//int a = 10;
//	////int* p = &a;
//	//const int* p = &a;
//	////int* const p = &a;
//	////int const* p = &a;
//	//
//	//*p = 20;
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	//printf("%d", a);
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//模拟实现库函数strlen
#include<stdio.h>
int len_strlen(char* c)
{
	int count = 0;
	while (*c != '\0')
	{
		count++;
		c++;
	}
	return count;
}

int main()
{
	int len = len_strlen("abcdec");
	printf("%d\n",len);
	return 0;

}