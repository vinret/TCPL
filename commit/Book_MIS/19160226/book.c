#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"

void inputs(char *prompt,char *s,int count)
{
	char p[100];
	do{
		printf(prompt);
		gets(p);
		if(strlen(p) > count)
		{
			printf("\nToo long\n");
		}
	}while(strlen(p) > count);
	strcpy(s,p);
}

void enter(void)
{
system("cls");
char ch;
struct books *p;
while(1)
{
	p=(struct books *)malloc(sizeof(struct books));
	char ch;
	inputs("isbn:",p->isbn,20);
	inputs("bookname:",p->bookname,20);
	inputs("author:",p->author,20);
	inputs("price:",p->price,5);
	printf("\n");
	dls_store(p,&head,&last);
	printf("Whether to continue ?(Y/N):");
	ch = getchar();
	if(ch == 'N')
	break;
}
}

void dls_store(struct books *i,struct books **head,struct books **last)
{
	struct books *p,*old;
	if((*last) == NULL)
	{
	i->prior = NULL;
	i->next = NULL;
	(*head) = i;
	(*last) = i;
	return;
	}
	p = (struct books *)malloc(sizeof(struct books));
	p = (*head);
	old = NULL;
	while(p!=NULL)
	{
		if(strcmp(p->isbn,i->isbn) < 0)
		{
		old = p;
		p = p->next;
		}
		else
		{
		if(p->prior)
		{
			p->prior->next = i;
			i->next = p;
			i->prior = p->prior;
			p->prior = i;
			return;
		}
		i->next = p;
		i->prior = NULL;
		p->prior = i;
		*head = i;
		return;
		}
	}
	old->next = i;
	i->next = NULL;
	i->prior = old;
	*last = i;
}

struct books *find(char *bn)
{
	struct books *p;
	p = head;

	while(p!=NULL)
	{
		if(strcmp(bn,p->bookname) == 0)
		{
		return p;
		}
		p = p->next;
	}
	return NULL;
}

void search(void)
{
	char name[20];
	struct books *p;
	printf("Input bookname:");
	gets(name);
	p = find(name);
	if(p == NULL)
		printf("Error.\n");
		else display(p);
}

void modify(void)
{
	char name[20];
	struct books *p;
	printf("Input bookname:");
	gets(name);
	p = find(name);
	if(p == NULL)  printf("Error.\n");
	else
	{
		inputs("isbn:",p->isbn,20);
		inputs("bookname:",p->bookname,20);
		inputs("author:",p->author,20);
		inputs("price:",p->price,5);
		printf("\n");
	}
}

void display(struct books *p)
{
	printf("%s\t",p->isbn);
	printf("%s\t",p->bookname);
	printf("%s\t",p->author);
	printf("%s\t",p->price);
	printf("\n");
}


void del(struct books **head,struct books **last)
{
	struct books *i;

	char s[50];
	inputs("Input bookname:",s,20);
	i = find(s);
	if(i)
	{
		if(*head == i)
		{
		*head = i->next;
		if(*head) (*head)->prior = NULL;
		else *last = NULL;
		}
		else
		{
		i->prior->next = i->next;
		if(i != *last)
		{
		i->next->prior = i->prior;
		}
		else
		{
		*last = i->prior;
		}
		}
		free(i);
	}
}

void save(void)
{
	struct books *p;
	FILE *fp;
	if((fp=fopen("books.csv","wb")) == NULL)
	{
		printf("open file error.\n");
		exit(1);
	}
	p = head;
	while(p!=NULL)
	{
		fwrite(p,sizeof(struct books),1,fp);
		p = p->next;
	}
	fclose(fp);
}

void load(void)
{
	struct books *p;
	FILE *fp;
	fp=fopen("books.csv","rb");
	if(fp == NULL)
	{
		printf("open file error.\n");
		exit(1);
	}
	while(head)
	{
		p = head->next;
		free(p);
		head = p;
	}
	head = last = NULL;
	printf("\n Load information \n");
	while(!feof(fp))
	{
		p = (struct books *)malloc(sizeof(struct books));
		if(1 != fread(p,sizeof(struct books),1,fp)) break;
		dls_store(p,&head,&last);
	}
	fclose(fp);
}
