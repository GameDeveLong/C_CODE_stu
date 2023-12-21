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
		printf("ͨѶ¼����");
		return;
	}
	printf("����������:->");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:->");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:->");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:->");
	scanf("%s", pc->data[pc->count].tel);
	printf("������סַ:->");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
}

void ShowContact(Contact* pc)
{
	assert(pc);
	printf("%20s\t%3s\t%20s\t%20s\t%30s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
		printf("ͨѶ¼Ϊ�գ�ɾ������\n");
		return;
	}
	printf("������Ҫɾ��������:->");
	scanf("%s", name);
	//1.����
	int pos = FindName(pc,name);
	if (pos == -1)
	{
		printf("�Ҳ���Ҫɾ������\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for (i < pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("������Ҫ���ҵ�����:->");
	scanf("%s", name);
	//1.����
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("�Ҳ���Ҫ���ҵ���\n");
		return;
	}
	else
	{
		printf("%20s\t%3s\t%20s\t%20s\t%30s\n", "����", "����", "�Ա�", "�绰", "סַ");		
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
	printf("������Ҫ�޸ĵ�����:->");
	scanf("%s", name);
	//1.����
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("�Ҳ���Ҫ�޸ĵ���\n");
		return;
	}
	printf("Ҫ�޸ĵ����Ѿ��ҵ������޸�");
	//2.�޸�
	printf("����������:->");
	scanf("%s", pc->data[pos].name);
	printf("����������:->");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:->");
	scanf("%s", pc->data[pos].sex);
	printf("������绰:->");
	scanf("%s", pc->data[pos].tel);
	printf("������סַ:->");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�\n");
	
}

int cmp_by_name(const void *p1,const void *p2)
{
	return strcmp(((PeoInfo*)p1)->name, ((PeoInfo*)p2)->name);
}
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count,sizeof(PeoInfo), cmp_by_name);
	printf("����ɹ�");
}
