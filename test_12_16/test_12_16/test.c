#define _CRT_SECURE_NO_WARNINGS 1

//1到100所有整数中出现多少个数字9

#include<stdio.h>
#include<assert.h>
//int main()
//{
//	int count = 0;
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 10==9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//strcpy的模拟实现
#if 0
char* my_strcpy(char* dest, char* src)
{
	char *ch = dest;
	assert(dest);
	assert(src);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ch;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hahahaha";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
//strcat的模拟实现
char* my_strcat(char* dest, char* src)
{
	char* ch = dest;
	assert(dest);
	assert(src);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++=*src++))
	{
		;
	}
	*dest = '\0';
}
int main()
{
	char arr1[20] = "King ";
	char arr2[] = "James";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
//strcmp的模拟实现
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[20] = "King";
	char arr2[] = "James";
	int r =my_strcmp(arr1, arr2);
	printf("%d\n", r);
	return 0;
}
//模拟实现strncpy
char* my_strncpy(char* dest, char* src,size_t num)
{
	char *ch = dest;
	int i = 0;
	for (i = 0; src[i] && i < num; i++)
	{
		dest[i] = src[i];
	}
	if (i < num)
		dest[i] = 0;
	return ch;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hahahaha";
	my_strncpy(arr1, arr2, 5);
	printf("%s\n", arr1);
	return 0;
}
//模拟实现strncat
char* my_strncat(char* dest, char* src, size_t n)
{
	char* ch = dest;
	while (*dest)
	{
		dest++;
	}
	int i = 0;
	for (int i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i];
	return ch;
}
int main()
{
	char arr1[20] ="hehehe ";
	char arr2[] = "hahahaha";
	my_strncat(arr1, arr2, 4);
	printf("%s\n", arr1);
	return 0;
}
#endif 
//strstr 的模拟实现
#include<assert.h>
#include<stdio.h>
char* my_strstr(const char* str1, const char* str2)
{
	const char* start = str1;
	const char* s1 = NULL;
	const char* s2 = NULL;
	assert(str1 && str2);
	while (*start)
	{
		s1 = start;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "cd";
	char* ch=my_strstr(arr1, arr2);
	if (ch = NULL)
	{
		printf("找不到");
	}
	else
		printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}