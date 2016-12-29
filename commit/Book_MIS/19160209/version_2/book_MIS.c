#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define n 30
#define m 20
struct bookinfo{
	char ISBN[m];
	char name[n];
	char writer[m];
	char price[m];
	struct bookinfo *next;
};
typedef struct bookinfo byte;

byte *create();
byte *menus(byte *head);
byte *delete(byte *head,char isbn[m]);
byte *find(byte *head,char isbn[m]);
byte *add(byte *head,byte *newp);
void edit(byte *p,char isbn[m]);
void output(byte *head);
void save(byte *head);

void save(byte *head)
{
	FILE *fp;
	byte *p=head;
	fp=fopen("temp.csv","w");
	if(fp==NULL)
			printf("FAIL to open!\n");
	while(p!=NULL)
	{
		fprintf(fp,"%20s%30s%20s%20s\n\n",p->name,p->writer,p->price,p->ISBN);
		p=p->next;
	}
	fclose(fp);
}
void edit(byte *p,char isbn[])
{
	printf("Please input the updated information(ISBN,name,writer,price).\n");
	printf("Titles and authors should not be separated by spaces.\n");
	scanf("%s%s%s%s",p->ISBN,p->name,p->writer,p->price);
	printf("%s %s %s %s\n",p->ISBN,p->writer,p->name,p->price);
}

byte *delete(byte *head,char isbn[])
{
	byte *p,*prev;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(strcmp(p->ISBN,isbn)==0) break;
		prev=p;p=p->next;
	}
	if(p==NULL) return head;
	if(p==head) head=head->next;
	else prev->next=p->next;
	return head;
}

byte *find(byte *head,char isbn[])
{
	byte *p=head;
	while(p!=NULL)
	{
		if(strcmp(p->ISBN,isbn)==0) return p;
		p=p->next;
	}
	return NULL;
}

byte *add(byte *head,byte *newp)
{
	byte *prev,*p;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(strcmp(p->ISBN,newp->ISBN)>0) break;
		prev=p;p=p->next;
	}
	newp->next=p;
	if(p==head)
		head=newp;
	else prev->next=newp;
	return head;
}

byte *menus(byte *head)
{
	printf("*************************************************************************\n");
	printf("<1>ADD book\n");
	printf("<2>DEL book\n");
	printf("<3>FIND book\n");
	printf("<4>EDIT book\n");
	printf("<5>QUIT\n");
	printf("Please input a number to choose what you want to do.\n");
	printf("*************************************************************************\n");
	int num;char isbn[m];
	scanf("%d",&num);
	switch (num){
		case 1:{
			       byte*newp;
			       newp=(byte*)malloc(sizeof(byte));
			       printf("Please input the book's ISBN,name,writer,price.(Titles and authors should not be separated by spaces)\n");
			       scanf("%s%s%s%s",newp->ISBN,newp->name,newp->writer,newp->price);
			       head=add(head,newp);
			       return head;
		       }break;
		case 2:{
			       printf("Please input the book's IBSN.\n");
			       scanf("%s",isbn);
		//	       printf("%d\n",isbn);
			       byte *p=find(head,isbn);
			       if(p!=NULL) head=delete(head,isbn);
			       else printf("NOT FOUND!\n");
			       return head;
		       }break;
		 case 3:{
				printf("Please input the book's IBSN.\n");
				scanf("%s",isbn);
				byte *p=find(head,isbn);
				if(p!=NULL) printf("The book's information:\n%8s%30s%20s%6s\n",p->ISBN,p->name,p->writer,p->price);
				else printf("NOT FOUND!\n");
				return head;
			}break;
		case 4:{
			       printf("Please input the book's ISBN.\n");
			       scanf("%s",isbn);
			       byte *p=find(head,isbn);
			       if(p!=NULL) edit(p,isbn);
			       else printf("NOT FOUND!\n");
			       return head;
		       }break;
		case 5:return head;break;
		default:printf("ERROR Command!\n");return head;break;
	}
}


byte *create()
{
	FILE *fp;int c=0;
	fp=fopen("temp.csv","r");
	if((fp=fopen("temp.csv","r"))==NULL)
		printf("ERROR!\n");
	byte *head=(byte *)malloc(sizeof(byte));
	byte *p;p=head;
	while(c!=EOF)
	{
		byte *new=(byte *)malloc(sizeof(byte));
		fscanf(fp,"%s%s%s%s",new->name,new->writer,new->price,new->ISBN);
	//	printf("%8s%30s%20s%6s\n",new->ISBN,new->name,new->writer,new->price);
		p->next=new;
		p=new;
		c=getc(fp);
	}
	if(feof(fp))
	{
		p->next=NULL;
	}
	head=head->next;
	fclose(fp);
	return head;
}

void output(byte *head)
{
	byte *p;
	p=head;
	while(p!=NULL)
	{
		printf("%8s%30s%20s%6s\n",p->ISBN,p->name,p->writer,p->price);
		p=p->next;
	}
}
int main()
{
	byte *head=create();
	printf("BEFORE\n");
	output(head);
	head=menus(head);
	printf("+++++++++++++++++++++++++++\n");
	printf("AFTER\n");
	output(head);
	save(head);
	return 0;
}
