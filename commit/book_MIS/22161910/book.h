#ifndef BOOK_H_
#define BOOK_H_
#include<stdio.h>
#include<stdlib.h>
struct Book
{
 char ISBN[14];
 char name[60];
 char author[20];
 float price;
struct Book *next;
};
typedef struct Book Book;
Book*creat_list1()
{
FILE*fp;
int i;
if((fp=fopen("books.scv","r"))==NULL)
{
  printf("无法打来文件！\n");
  exit(1);
}
Book*head=(Book*)malloc(sizeof(Book));
Book *p=head;
while(!feof(fp))
{
 Book*newp=(Book*)malloc(sizeof(Book));
 fscanf(fp,"%s%s%s%f",newp->ISBN,newp->name,newp->author,&newp->price);
 if(feof(fp))
{
p->next=NULL;
head=head->next;
return head;
}
p->next=newp;
p=newp;
p->next=NULL;
}
// return head;
return 0;
}
Book*search(Book*head,const char*ISBN);
Book*update(Book*head,const char*ISBN);
int insert(Book**head);
int delete(Book*head,const char*ISBN);
int load(Book*head,const char*filename);
int save(Book*head,const char*filename);
#endif
