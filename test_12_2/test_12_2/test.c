#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "254815146@qq.com";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	char* p = "@.";
//	char* s = NULL;
//	for (s = strtok(arr2, p); s != NULL;s=strtok(NULL,p))
//	{
//		printf("%s\n", s);
//	}
//
//
//	/*char *s=strtok(arr2, p);
//	printf("%s\n", s);
//	s = strtok(NULL, p);
//	printf("%s\n", s);*/
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d:%s\n", i, strerror(i));
//	}
//	return 0;
//}

#include <stdio.h>
//#include <string.h>
//#include <errno.h>
// int main()
// {
//	 FILE * pFile;
//	 pFile = fopen("unexist.ent", "r");
//	 if (pFile == NULL)
//		 perror("Error opening file unexist.ent");
//	 return 0;
//	 }
//#include <stdio.h>
#include<assert.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest&&src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest+num)=*((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[2000] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[20] = { 0 };
	//my_memcpy(arr2, arr1, 7 * sizeof(int));
	my_memmove(arr1, arr1+3, 20 );
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}

