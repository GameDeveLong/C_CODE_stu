#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 20
#define MAX_TEL 30
#define MAX_ADDER 40
//类型声明
//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tel[MAX_TEL];
	char addr[MAX_ADDER];
}PeoInfo;

//通讯录的信息
typedef struct Contact
{
	PeoInfo data[MAX];//人的信息
	int count;//记录通讯录有多少个人
}Contact;

//初始化通讯录
void InitContact(Contact* pc);


//增加联系人
void AddContact(Contact* pc);

//显示通讯录
void ShowContact(Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

//排序（按姓名）
void SortContact(Contact* pc);

