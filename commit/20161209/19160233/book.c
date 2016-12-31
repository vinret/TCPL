#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book{
	char name[50];
	char writer[20];
	char ISBN[4];
	float price;
	struct book *next;
}BOOK;
BOOK *find(BOOK *head,char n[]);
void del(BOOK *head,char name);
BOOK *load();
BOOK *add(BOOK *head);
void list(BOOK *last);
int save(BOOK *head);
int main()
{
	BOOK *table,*p,*l;
	int i,j=0;
	char name[50];
	table=(BOOK *)malloc(sizeof(BOOK));
	table->next=NULL;
	while(j!=5)
	{
		printf("****图书管理系统****\n1.添加图书\n2.查询图书记录\n3.删除图书记录\n4.打印图书表\n5.退出系统\n请输入命令：");
		scanf("%d",&j);
		fflush(stdin);

		switch(j)
		{
			case 1:
				table=add(table);
				break;
			case 2:
				printf("请输入书名：");
				scanf("%s",name);
				getchar();
				p=find(table,name);
				p=p->next;
				if(p!=NULL)
				{
					printf("书名\t作者\t编号\t价格\n");
					list(p);
				}
				else
				{
					printf("该书不存在。\n");
				}
				break;
			case 3:
				printf("请输入书名：");
				scanf("%s",name);
				getchar();
				del(table,name);
				break;
			case 4:
				l=table->next;
				printf("书名\t作者\t编号\t价格\n");
				while(l!=NULL)
				{
					list(l);
					l=l->next;
				}
				break;
			case 5:
				i=save(table);
				break;
			default:
				printf("未知操作！\n");
		}
	}
	system("pause");
	return 0;
}
BOOK* load()
{
	BOOK *p,*head,*now;
	char line[100];
	FILE *fp;
	fp=fopen("book.csv","r");
	if(NULL==fp)
	{
		return NULL;
	}
	fgets(line,100,fp);
	head=(BOOK *)malloc(sizeof(BOOK));
	sscanf(line,"%s%s%s%f",head->name,head->writer,head->ISBN,&head->price);
	head=now;
	while(fgets(line,100,fp)!=NULL)
	{
		p=(BOOK *)malloc(sizeof(BOOK));
		sscanf(line,"%s%s%s%f",p->name,p->writer,p->ISBN,&p->price);
		now->next=p;
		now=now->next;
	}
	now=NULL;
	fclose(fp);
	fp=NULL;
	return head;
}
int save(BOOK *head)
{
	FILE *fp;
	int i=0;
	fp=fopen("book.csv","w");
	if(NULL==fp)
	{
		return -1;
	}
	while(head!=NULL)
	{
		fprintf(fp,"%s\t",head->name);
		fprintf(fp,"%s\t",head->writer);
		fprintf(fp,"%s\t",head->ISBN);
		fprintf(fp,"%.2f\n",head->price);
		head=head->next;
	}
	fclose(fp);
	return 0;
}
BOOK *find(BOOK *head,char n[])
{
	BOOK *p,*last;
	char str[50];
	int i,j=0;
	last=head;
	p=last->next;
	while(p!=NULL)
	{
		strcpy(str,p->name);
		i=strcmp(str,n);
		if(i==0)
		{
			return last;
		}
		last=p;
		p=p->next;
	}
	return NULL;
}
void list(BOOK *last)
{
	printf("%s\t%s\t%s\t%.2f\n",last->name,last->writer,last->ISBN,last->price);
}
BOOK *add(BOOK *head)
{
	BOOK *p,*setup;
	int i,j=1;
	char str[50];
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	printf("请输入待添加的图书的数量：");
	scanf("%d",&i);
	fflush(stdin);
	while(i!=0)
	{
		setup=(BOOK *)malloc(sizeof(BOOK));
		printf("请输入书名：");
		gets(str);
		strcpy(setup->name,str);
		printf("请输入作者：");
		gets(str);
		strcpy(setup->writer,str);
		printf("请输入图书的编号：");
		gets(str);
		fflush(stdin);
		strcpy(setup->ISBN,str);
		printf("请输入书本的价格：");
		scanf("%f",&(setup->price));
		fflush(stdin);
		p->next=setup;
		p=p->next;
		i--;
	}
	p->next=NULL;
	printf("添加成功！\n");
	return head;
}
void del(BOOK *head,char name)
{
	BOOK *last,*now,*p;
	last=find(head,name);
	if(NULL==last)
	{
		printf("该书并不存在");
	}
	else
	{
		p=last->next;
		last->next=p->next;
		free(p);
	}
}


