#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int Print_key()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//int main()
//{
//	
//	int ret=Print_key();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else if (ret == 0)
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//#include<ctype.h>
//int main()
//{
//	char arr[] = "ABCDEF";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			//arr[i] = arr[i] + 32;
//			arr[i] = tolower(arr[i]);
//
//		}
//		putchar(arr[i]);
//		i++;
//	}
//	return;
//}


//#include<string.h>
//int main()
//{
//	if (strlen("abcd") - strlen("abcfef") > 0)//strlen 返回的是一个无符号整型，返回值不可能小于0
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于\n");
//	}
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
//char* my_strcpy(char* dest, char* str)
//{
//	assert(dest);
//	assert(str);
//	char* c = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return c;
//}
//int main()
//{
//	char arr1[20] = { "1" };
//	char arr2[] = "abcef";
//	printf("拷贝之前：%s\n", arr1);
//	printf("拷贝之后: %s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//char* my_strcat(char* dest, const char* scr)
//{
//	assert(dest && scr);
//	char* r = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return r;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("之前：%s\n", arr1);
//	my_strcat(arr1, arr2);
//	printf("之后: %s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == *s2)
//	{
//		if (s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[20] = "abcdg ";
//	char arr2[] = "abcde";
//	int r =my_strcmp(arr1, arr2);
//	if (r > 0)
//		printf("大于\n");
//	else if (r == 0)
//		printf("等于\n");
//	else
//		printf("小于\n");
//	return 0;
//}


//char my_strncpy(char* s1, char* s2, size_t n)
//{
//	char* ret = s1;
//	assert(s1 && s2);
//	while (n)
//	{
//		*s1++ = *s2++;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxx";
//	char arr2[] = "abcdef";
//	my_strncpy(arr1, arr2, 3);
//	printf("%s\n", my_strncpy(arr1, arr2, 3));
//	return 0;
//}
char* my_strncat(char* str1, const char* str2, size_t n)
{
	if (str1 == NULL || str2 == NULL)
		return 0;
	char* strat = str1;
	while (*str1)
		str1++;
	while ((*str1++ = *str2++) && n--);
	*str1 = '\0';
	return strat;
}

	
int main()
{
	char arr1[100] = "hello ";
	char arr2[] = "worldxxx";
	char*s =my_strncat(arr1, arr2, 4);
	printf("%s\n",s);
	return 0;
}

//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	
//
//	while (*dest)
//	{
//		dest++;
//	}	
//	while (*src && num--)
//	{
//		*dest++ = *src++;
//	}
//
//	*dest = '\0';
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "Hello ";
//	char arr2[20] = "World!xxxxxx";
//	my_strncat(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//
//}