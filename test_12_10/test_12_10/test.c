#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}
//size_t my_strlen1(char* arr)
//{
//	size_t count = 0;
//	assert(arr);
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}

//size_t my_strlen2(char* arr)
//{
//	assert(arr);
//	char* start = arr;
//	while (*arr)
//	{
//		arr++;
//	}
//	return arr - start;
//}
#include<stdio.h>
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
////int main()
////{
////	char arr1[20] = { 0 };
////	char arr2[] = "abcdef";
////	my_strcpy(arr1, arr2);
////	printf("%s\n", arr1);
////	return 0;
////}

//#include<assert.h>
//#include<stdio.h>
//#include<string.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;//�ҵ�dest��\0��λ��
//	}
//	while (*src)
//	{
//		*dest = *src;//��ʼ����
//		dest++;
//		src++;
//	}
//	dest = '\0';//��Ϊsrc���һ�ο���ʱû�п���\0,������Ҫ�Լ�����\0
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
#include<assert.h>
#include<stdio.h>
int my_strcmp(const char* p1, const char* p2)
{
	assert(p1 && p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > *p2)
		return 1;
	else
		return -1;
}
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abdc";
	int ret =my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf("arr1����arr2\n");
	}
	else if (ret < 0)
	{
		printf("arr1С��arr2\n");

	}
	else
	{
		printf("�������\n");
	}
	return 0;
}