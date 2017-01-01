#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"

int load(Book *head)
{
 Book*p=head;
 FILE *fp;
 int i=0;
 fp=fopen("book.csv","r");
 if (fp==NULL)
 {
  printf("Failure to open the file!\n");
  return -1;
 }
 while(p!=NULL)
 {
  fscanf(fp,"%s%s%s%1f",p->name,p->author,p->ISBN,&p->price);
  i++;
  p=p->next;
 }
 fclose(fp);
 return i;
}

int save(Book *head)
{
 Book*p=head;
 FILE *fp;
 int i=0;
 fp=fopen("book.csv","r");
 if(fp==NULL)
 {
  printf("Failure to open the file!\n");
  return -1;
 }
 while(p!=NULL)
 {
  fprintf(fp,"%s%s%s%1f",p->name,p->author,p->ISBN,&p->price);
  i++;
  p=p->next;
 }
 fclose(fp);
 return i;
}

Book *search(Book *head,char *qISBN)
{
 Book *p=head;
 while(p!=NULL)
 {
  if(strcmp(qISBN,p->ISBN)==0)
   return p;
  p=p->next;
 }
 return NULL;
}

void insert(Book *head)
{
 Book *newp=(Book*)malloc(sizeof(Book));
 printf("Please input the name,the author,the ISBN and the price of the book:\n");
 scanf("%s%s%s%1f",newp->name,newp->author,newp->ISBN,&newp->price);
 
 Book *prev,*p;
 prev=NULL;
 p=head;
 while(p!=NULL)
 {
  if(p->ISBN==newp->ISBN)
  {
   printf("the book has been inserted!\n");
   return head;
  }
  if(p->ISBN > newp->ISBN)
   break;
  else 
  {
   prev=p;
   p=p->next;
  }
 }
 newp->next=p;
 if(p==head)
  head=newp;
 else
  prev->next=newp;
 return head;
}

int delete(Book *head,char *qISBN)
{
 Book *prev,*p;
 prev=NULL;
 p=head;
 while(p!=NULL)
 {
  if(strcmp(qISBN,p->ISBN==0))
   break;
  prev=p;
  p=p->next;
 }
 if(p==NULL)
  return -1;
 if(p==head)
  head=head->next;
 else
  prev->next=p->next;
 free(p);
 return 0;
}

void modify(Book *head,char *qISBN)
{
 Book *p;
 p=search(head,qISBN);
 printf("Please input the name,the author,the ISBN and the price of the book:\n");
 scanf("%s%s%s%1f",p->name,p->author,p->ISBN,&p->price);
}

void output(Book *head)
{
 Book *p;
 printf("Book\tAuthor\tISBN\tprice\n");
 for(p=head;p!=NULL;p=p->next)
  printf("%s\t%s\t%s\t%1f\n");
}

Book *DeleteList(Book *head)
{
 Book *p;
 while(head!=NULL)
 {
  p=head;
  head=head->next;
  free(p);
 }
 return NULL;
}
 
