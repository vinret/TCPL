#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"

void Save(struct BOOK *head)
{
	struct BOOK *temp;
	FILE *fp;
	if((fp=fopen("books.csv","wb"))==NULL)
	{
		printf("error\n");
	}
	else
	{
		temp=head;
		while((temp->next)!=NULL)
		{
			fprintf(fp,"%s,%s,%s,%f\n",temp->name,temp->author,temp->ISBN,temp->price);
			temp=temp->next;
		}
	fclose(fp);
	}
}

void Read(struct BOOK *head)
{
	struct BOOK *temp;
	struct BOOK *p=head;
	FILE *fp;
	if((fp=fopen("books.csv","r"))==NULL)
	{
		printf("error\n");
		exit(0);
	}
	else
	{
		while(fscanf(fp,"%[^,],%[^,],%[^,],%f",&p->name,&p->author,&p->ISBN,&p->price)!=EOF)
		{
			p->next=temp;
			temp->next=NULL;
			p=temp;
			p=(struct BOOK *)malloc(sizeof(struct BOOK));
		}
		fclose(fp);
		//free(p);
	}
}
	


struct BOOK *Add(struct BOOK *head,struct BOOK *p)
{
	p->next=head;
	head=p;
	return head;
}

struct BOOK *Search(struct BOOK *head, char n[])
{
	struct BOOK *p=head;
	while(p!=NULL)
	{
		if(strcmp(p->ISBN,n)==0)
		{return p;break;}
		p=p->next;
	}
	return NULL;
}

struct BOOK *Delete(struct BOOK *head,struct BOOK *p)
{
	/*struct BOOK *prev,*p;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(strcmp(p->ISBN,n)==0)
			break;
		prev=p;p=p->next;
	}
	if(p==NULL)
	{
		printf("Not Found\n");
		return head;
	}
	if(p==head)
		head=head->next;
	else
		prev->next=p->next;
	free(p);
	return head;*/
	struct BOOK *temp;
	if(p==head)
		return head->next;
	else
	{
		temp=head;
		while(temp->next!=p)
			temp=temp->next;
		if(p->next==NULL)
			temp->next=NULL;
		else
			temp->next=p->next;
	}
	free(p);
	return head;

}

void DeleteList(struct BOOK *head)
{
	while((head->next)!=NULL)
	head=DeleteHead(head);
}

struct BOOK *DeleteHead(struct BOOK *head)
{
	struct BOOK *p;
	if(head==NULL) return NULL;
	p=head;
	head=head->next;
	free(p);
	return head;
}

/*struct BOOK *Modify(struct BOOK *p,struct BOOK *pnew)
{
	p->name=pnew->name;
	p->author=pnew->author;
	p->ISBN=pnew->ISBN;
	p->price=pnew->price;
	free(pnew);
	return p;
}*/


