#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							 {9802,"wang",19},
//					         {9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}

#include<stdlib.h>
#include <stdio.h>
//int main()
//{
//	char* p = "  -1234156sbadb" ;
//	int ret = atoi(p);
//	printf("%d", ret);
//
//	return 0;
//}

//#include <stdio.h>      /* printf, fgets */
//#include <stdlib.h>     /* atoi */
//
//int main()
//{
//	int i;
//    char buffer[256] = "1234a56";
//	printf("Enter a number: ");
//	//fgets(buffer, 256, stdin);
//	i = atoi(buffer);
//	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
//	return 0;
//}


//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    char c;
//    int i = 0;
//    char str[] = "Example sentence to test isspace abc df\n";
//    while (str[i])
//    {
//        c = str[i];
//        if (isspace(c))
//        {
//            c = '\n';
//        }
//        putchar(c);
//        i++;
//    }
//    return 0;
//}

#include <ctype.h>
#include <stdio.h>
#include <limits.h>
#include <assert.h>
int my_atoi(char* str)
{

    int flag = 1;
   
    assert(str);
    
    if (*str == '\0')
    {
        return 0;
    }
   
    while (*str == ' ')
    {
        str++;
    }
    
    if (*str == '+')
    {
        flag = 1;
        str++;
    }
    if (*str == '-')
    {
        flag = -1;
        str++;
    }
    long long n = 0;

    while (*str != '\0')
    {

        
        if (isdigit(*str))
        {
            n = n * 10 + (*str - '0');
            
            if (n > INT_MAX)
            {
                return INT_MAX;
                break;
            }
            if (n < INT_MIN)
            {
                return INT_MIN;
                break;
            }
        }
        else
        {
            
            break;
        }
        str++;
    }
   
    n *= flag;
    return (int)n;

}
int main()
{
    int n;
    char* str = "-1237899158a45";
    n = my_atoi(str);
    printf("n=%d\n", n);
    
    return 0;
}