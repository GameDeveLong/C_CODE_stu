#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int num = n << 1;
//	//00000000000000000000000000001010  10的二级制
//	//00000000000000000000000000010100   n<<1的结果
//	printf("n=%d\n", n);
//	printf("num=%d\n", num);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 10;
//	int num = n >> 1;
//	//00000000000000000000000000001010  10的二进制
//	//00000000000000000000000000000101   n<<1的结果
//	printf("n=%d\n", n);
//	printf("num=%d\n", num);
//	return 0;
//}



//int main()
//{
//	int a = 5;
//	int b = -2;
//	int c = a & b;
//	//00000000000000000000000000000101 --  5的补码
//	//10000000000000000000000000000010 --  -2的原码
//	//11111111111111111111111111111101 --  -2的反码
//	//11111111111111111111111111111110 --   -2的补码
//	//00000000000000000000000000000101 --  5的补码
//	//00000000000000000000000000000100 --    a&b
//
//	printf("a&b=%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = -2;
//	int c = a | b;
//	//只要有1就是1，两个同时为0才是0
//	//00000000000000000000000000000101 --  5的补码
//	//10000000000000000000000000000010 --  -2的原码
//	//11111111111111111111111111111101 --  -2的反码
//	//11111111111111111111111111111110 --   -2的补码
//	//00000000000000000000000000000101 --  5的补码
//	//11111111111111111111111111111111 --    a|b  这是补码，我们要转为原码
//	//10000000000000000000000000000001  
//	printf("a|b=%d\n", c);
//
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = -2;
//	int c = a ^ b;
//	//相同为0，相异为1
//	//00000000000000000000000000000101 --  5的补码
//	//10000000000000000000000000000010 --  -2的原码
//	//11111111111111111111111111111101 --  -2的反码
//	//11111111111111111111111111111110 --   -2的补码
//	//00000000000000000000000000000101 --  5的补码
//	//11111111111111111111111111111011 --    a^b的补码
//	//10000000000000000000000000000101  --   a^b的原码 
//	printf("a^b=%d\n", c);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


int main()
{
	int a = 10;
	int b = ~a;
	//00000000000000000000000000001010 --10的补码
	//11111111111111111111111111110101  ---~a
	//10000000000000000000000000001010
	//10000000000000000000000000001011   ---~a的补码
	printf("%d\n", b);
	return 0;
}