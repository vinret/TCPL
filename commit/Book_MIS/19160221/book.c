#include "book.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

book* load ()
{
	book *p,*pn,*head;
	char c;
    head=NULL;
	
	FILE* fp;
	fp=fopen("books.csv","r");
	if(fp==NULL)
	{
		printf("  文件都打不开，你个辣鸡！\n");
		exit(1);
	}
	
	while(1)
	{
		pn=(book *)malloc(sizeof(book));
		fscanf(fp,"%s%s%s%s",pn->name,pn->author,pn->ISBN,pn->price);   
		
		if((c=fgetc(fp))==EOF)   break; 

		if(head==NULL)
		{	
			head=pn;
			p=head;
		}
		else
		{
 			p->next=pn;
			p=p->next;
		}
		pn->next=NULL;
	}

	fclose(fp);
	return head;
}

book* save(book* head)
{
	 FILE* fp;
	 fp=fopen("books.csv","w");
	 if(fp==NULL)
	 {   
		 printf("  文件都打不开，你个辣鸡！!\n");
		 exit(1);
	 }
	 book* p;
	 p=head;
	 while(p!=NULL)
	 {
		 fprintf(fp,"%s %s %s %s\n",p->name,p->author,p->ISBN,p->price);
		 p=p->next;
	 }
     fclose(fp);
	 while(head!=NULL)
	 {
		 free(head);
		 head=head->next;
	 }
	 return head;
}

book* insert(book* head,book* p)
{
	p->next=head;
	head=p;
	return head;
}

int find(book* head,char* isbn)
{
	book* p;
	p=head;

	while(p!=NULL)
	{
		if(!strcmp(isbn,p->ISBN))	break;
		else p=p->next;
	}
	if(p==NULL)
	{
		printf("  查无此书哦~\n");
		return -1;
	}
	else
	{
		printf("  就是这本书吧~\n");
		printf("  书名: %s\t作者: %s\tISBN: %s\t价格: %s\t\n",p->name,p->author,p->ISBN,p->price);
		return 0;
	}
}

book* delete(book* head,char* isbn)
{
	book* p,*prev;
	char c='!';
	p=head;
	prev=NULL;
	while(p!=NULL)
	{   
		if(!strcmp(isbn,p->ISBN))   break;
		prev=p;
		p=p->next;
	}
	if(p==NULL) printf("  查无此书哦~\n");
	else
	{ 
		printf("  书名: %s\t作者: %s\tISBN: %s\t价格: %s\t\n",p->name,p->author,p->ISBN,p->price);
		
		while((c!='y')&&(c!='n'))
		{
			printf("  我真删了？？？(y/n): \n");
			scanf(" %c",&c);                           /*   %c前加空格，避免读入'\n'   */
			if(c=='y')
			{
				if(p==head) head=head->next;
				else prev->next=p->next;
				printf("  书名: %s\t作者: %s\tISBN: %s\t价格: %s\t\n删除成功！\n",p->name,p->author,p->ISBN,p->price);
				free(p);
			}
			else	 printf("  那就不删了~\n");
		}
	}
	return head;
}

book* update(book* head,char* isbn,book* t)
{   
	book* p,*prev;
	char c='!';
	p=head;
	prev=NULL;
	while(p!=NULL)
	{   
		if(!strcmp(isbn,p->ISBN))   break;
		prev=p;
		p=p->next;
	}
	if(p==NULL) printf("  查无此书哦~\n");
	else
	{   
		while((c!='y')&&(c!='n'))
		{   
			printf("  真的要改阿？(y/n): \n");             
			scanf(" %c",&c);                           /*   %c前加空格，避免读入'\n'   */
			if(c=='y')
			{   
				if(p==head) head=head->next;
				else prev->next=p->next;
				free(p);
				head=insert(head,t);
				printf("  改完啦~\n");
				printf("  书名: %s\t作者: %s\tISBN: %s\t价格: %s\t\n",t->name,t->author,t->ISBN,t->price);
			}
			else	printf("  就说还是别改了嘛~\n");
		}
	}
	return head;
}


void output(book* head)
{
	book* p;
	p=head;
	while(p!=NULL)
	{
		printf("  书名: %s\t作者: %s\tISBN: %s\t价格: %s\n",p->name,p->author,p->ISBN,p->price);
		p=p->next;
	}
}
