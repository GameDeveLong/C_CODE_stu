#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TEL 30
#define MAX_ADDER 40
//��������
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDER];
}PeoInfo;

//ͨѶ¼����Ϣ
typedef struct Contact
{
	PeoInfo data[MAX];//�˵���Ϣ
	int count;//��¼ͨѶ¼�ж��ٸ���
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);


//������ϵ��
void AddContact(Contact* pc);

//��ʾͨѶ¼
void ShowContact(Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//���򣨰�������
void SortContact(Contact* pc);

