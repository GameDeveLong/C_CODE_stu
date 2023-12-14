#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////打开⽂件
//FILE* fopen(const char* filename, const char* mode);
////关闭⽂件
//int fclose(FILE* stream);

#include<stdio.h>
//int main()
//{
//	//打开文件，为了写
//	FILE* pf=fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 1;
//	}
//	//写文件
//	//.....
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//打开文件，为了写
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 1;
//	}
//	//写文件
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('e', pf);
//	fputc('g', pf);
//	fclose(pf);*/
//	int i = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//	}
//	pf = NULL;
//	return 0;
//}
//把data.txt的文件
//拷贝到data1.txt中
#include<stdio.h>
int main()
{
	FILE* pfread=fopen("data.txt", "r");
	if (pfread == NULL)
	{
		perror("pfread");
		return 1;
	}
	FILE* pfwrite = fopen("data1.txt", "w");
	if(pfwrite==NULL)
	{
		fclose("pfread");
		perror("pfwrite");
		return 1;
	}
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		fputc(ch,pfwrite);
	}
	fclose(pfread);
	fclose(pfwrite);
	return 0;
}