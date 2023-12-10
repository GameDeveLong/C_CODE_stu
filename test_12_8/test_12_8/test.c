#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//int my_strlen(const char*str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char c1[] = { 0 };
//	char c2[] = "ghjkkk";
//	int ret=my_strlen(c1);
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcpy(char* dest,  char* src)
//{
//	assert(dest &&src);
//	char* r = dest;
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	return r;
//}
//char* my_strcat(char* dest, char* src)
//{
//	assert(*dest && *src);
//	char* r = dest;
//		while(*dest)
//		{
//			dest++;
//		}
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return r;
//}
//int main()
//{
//	char c1[20] = "hello ";
//	char c2[] = "zmjkk";
//	my_strcat(c1, c2);
//	printf("%s\n", c1);
//	return 0;
//}
//int my_strcmp(const char* s1, const char* s2)
//{
//	if (*s1 == '\0')
//		return 0;
//	if (*s1 == *s2)
//	{
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char c1[20] = "hello ";
//	char c2[] = "zmjkk";
//	int ret= my_strcmp("hello", "zmjkk");
//	if (ret > 0)
//	{
//		printf("大于");
//	}
//	else if (ret < 0)
//	{
//		printf("小于");
//	}
//	else
//		printf("等于");
//	return 0;
//}

char* my_strstr(const char* str1,const char* str2)
{
	char* cur = str1;
	char* s1 = NULL;
	char* s2 = NULL;
	assert(str1 && str2);
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cd";
	char* ret=my_strstr(arr1, arr2);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("找不到");
	return 0;
}