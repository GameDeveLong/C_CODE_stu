#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		fputc('a'+i,pf);
//		//fputc('\n', pf);
//	}
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	int ch =fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	pf = NULL;
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	FILE* pfread = fopen("data.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen->data.txt");
//		return 1;
//	}
//	FILE* pfwrite = fopen("data_copy.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		perror("fopen->data_copy.txt");
//		return 1;
//	}
//	int  ch = 0;
//	while ((ch=fgetc(pfread))!=EOF)
//	{
//		fputc(ch,pfwrite);
//	}
//	fclose(pfread);
//	fclose(pfwrite);
//	return 0;
//}


//int main()
//{
//	FILE* pf= fopen("test.txt", "w");
//		if (pf== NULL)
//		{
//			return 1;
//		}
//		fputs("abcdef\n", pf);
//		fputs("abcdef\n", pf);
//		fputs("abcdef\n", pf);
//		fputs("abcdef\n", pf);
//		fputs("abcdef\n", pf);
//		fputs("abcdef\n", pf);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	char ch[20] = "xxxxxxx";
//	fgets(ch, 10, stdin);
//	fputs(ch, stdout);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",20,88.5f };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { "zhangsan",20,88.5f };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 1;
	}
	fscanf(pf,"%s %d %f",s.name,&(s.age),&(s.score));
	fprintf(stdout,"%s %d %lf", s.name, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}