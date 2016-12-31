#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"

Book *load(Book *head)       
{
 FILE *fp;
 if((fp=fopen("books.csv","r"))==NULL)
 {
  puts("Failure to open the file!");
  exit(1);
 }
 head=(Book *)malloc(sizeof(Book));
 Book *p=head;
 p->next=NULL;
 while(!feof(fp))
 {
   Book *newp=(Book *)malloc(sizeof(Book));
   fscanf(fp,"%s%s%s%f",newp->name,newp->author,newp->ISBN,&newp->price);
   if(feof(fp))
   {
    fclose(fp);
    p->next=NULL;
    head=head->next;
    return head;
   }
   p->next=newp;
   p=newp;
   p->next=NULL;
 }
}

Book *search(Book *head,char ISBN[14])       
{
 Book *p=head;
 while(p!=NULL)
 {
  if(strcmp(p->ISBN,ISBN)==0)
  {
    return p;
  }
  p=p->next;
 }
 return NULL;
}
 
Book *delete(Book *head,char ISBN[14])   
{
  Book *prev,*p;
  prev=NULL; p=head;
  while(p!=NULL)
  {
   if(strcmp(p->ISBN,ISBN)==0)          
     break;
     prev=p; p=p->next;
  }
  if(p==NULL)
     return head;
  if(p==head)
     head=head->next;
  else
     prev->next=p->next;              
  free(p);
  return head;
}

Book *insert(Book *head)               
{
  Book *newp=(Book *)malloc(sizeof(Book));
  puts("Please input the information of the book:");
  scanf("%s%s%s%f",newp->name,newp->author,newp->ISBN,&newp->price);
  newp->next=head;
  head=newp;
  return head;
}

void modify(Book *head,char ISBN[14]) 
{
   Book *p;
   p=search(head,ISBN);
   puts("Please input the new information of the book:");
   scanf("%s%s%s%f",p->name,p->author,p->ISBN,&p->price);
}
   

void output(Book *head)                  
{
  Book *p;
  p=head;
  printf("Book\t\t\tAuthor\t\t\tISBN\tPrice\n");
  while(p!=NULL)
  {
   printf("%s\t\t\t%s\t\t\t%s\t%.2f\n",p->name,p->author,p->ISBN,p->price);
   p=p->next;
  }
}

int save(Book *head)                    
{
  FILE *fp;
  fp=fopen("books.csv","w");
  Book *p;
  p=head;
  if(fp==NULL)
    return -1;
  for(;p;p=p->next)
  {
   fprintf(fp,"%s\t\t\t%s\t\t\t%s\t%.2f\n",p->name,p->author,p->ISBN,p->price);
  }
  fclose(fp);
  return 0;
}

Book *DeleteList(Book *head)  
{
   Book *p=NULL;
   while(head!=NULL)
   {
     p=head;
     head=head->next;
     free(p);
   }
   return NULL;
}




