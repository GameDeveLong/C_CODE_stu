#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 100)
	{
		printf("通讯录已满");
		return;
	}
	printf("请输入姓名:->");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:->");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:->");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:->");
	scanf("%s", pc->data[pc->count].tel);
	printf("请输入住址:->");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
}

void ShowContact(Contact* pc)
{
	assert(pc);
	printf("%20s\t%3s\t%20s\t%20s\t%30s\n", "姓名", "年龄", "性别", "电话", "住址");
	int i =0;
	for (i =0 ; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%20s\t%20s\t%30s\n",pc->data[i].name,
		                                       pc->data[i].age,
			                                   pc->data[i].sex,
			                                   pc->data[i].tel,
			                                   pc->data[i].addr);
	}
}

static int FindName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if(0== strcmp(pc->data[i].name, name));
		{
			return i;
		}
	}
	return -1;
}


void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，删除不了\n");
		return;
	}
	printf("请输入要删除的姓名:->");
	scanf("%s", name);
	//1.查找
	int pos = FindName(pc,name);
	if (pos == -1)
	{
		printf("找不到要删除的人\n");
		return;
	}
	//2.删除
	int i = 0;
	for (i < pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("请输入要查找的姓名:->");
	scanf("%s", name);
	//1.查找
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("找不到要查找的人\n");
		return;
	}
	else
	{
		printf("%20s\t%3s\t%20s\t%20s\t%30s\n", "姓名", "年龄", "性别", "电话", "住址");		
			printf("%20s\t%3d\t%20s\t%20s\t%30s\n", pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tel,
				pc->data[pos].addr);
		
	}
}


void ModifyContact(Contact* pc) 
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("请输入要修改的姓名:->");
	scanf("%s", name);
	//1.查找
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("找不到要修改的人\n");
		return;
	}
	printf("要修改的人已经找到，请修改");
	//2.修改
	printf("请输入姓名:->");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:->");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:->");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:->");
	scanf("%s", pc->data[pos].tel);
	printf("请输入住址:->");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
	
}

int cmp_by_name(const void *p1,const void *p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count,sizeof(PeoInfo), cmp_by_name);
	printf("排序成功");
}
