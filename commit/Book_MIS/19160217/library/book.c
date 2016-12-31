#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"

/*********************read the information*********************************/
book_list* load()
{
   FILE*fp;
   if((fp=fopen("book.csv","r"))==NULL)
  {
   printf("Fail to open the file\n");
   exit(1);
  }
    
  book_list* head=(book_list*)malloc(sizeof(book_list));
  book_list* p=head;
  char p1[20],p2[20],p3[20],p4[20];
  while(!feof(fp))
  {
    book_list* pnew=(book_list*)malloc(sizeof(book_list));
    fscanf(fp,"%s %s %d %f",pnew->name,pnew->auther,pnew->ISBN,&pnew->price);
    if(feof(fp))
    {
      fclose(fp);
      p->next=NULL;
      head=head->next;
      return head;
    }
   p->next=pnew;
   p=pnew;
   p->next=NULL;
  }
}
 /*****************************save thre information************************/
void save(book_list* head)
{
  FILE* fp;
  if((fp=fopen("books.csv","w"))==NULL)
   {
     printf("Fail to open the file!\n");
     exit(1);
   }
  book_list* p;
  p=head;
  while(p!=NULL)
      {
        fprintf(fp,"%s    %s     %d    %.2f\n",p->name,p->auther,p->ISBN,p->price);
        p=p->next;
      }
  fclose(fp);
}


/******************************search the book*****************************/
book_list* search(book_list* head,int ISBN[20])
{
  book_list* p;
  p=head;
  while(p!=NULL)
  {
   if(p->ISBN==ISBN)
     {
       printf("%s  %s   %d   %.2f\n",p->name,p->auther,p->ISBN,p->price);
       return p;
     }
     p=p->next;
 }
 printf("There is no such book!\n");
 return NULL;
}


/********************************insert the book**************************/
book_list* insert(book_list* head)
{
  book_list* pnew=(book_list*)malloc(sizeof(book_list));
  printf("Please input the name of the book:\n");
  scanf("%s",pnew->name);
  printf("Please input the auther of the book:\n");
  scanf("%s",pnew->auther);
  printf("Please input the ISBN of the book:\n");
  scanf("%d",pnew->ISBN);
  printf("Please input the price of the book:\n");
  scanf("%f",&pnew->price);
  pnew->next=head;
  head=pnew;
  return head;
}

/*******************************delete the book******************************/void delete(book_list* head,int ISBN[20])
{
  book_list *p,*prev;
  p=head;
  prev=NULL;
 /*search*/
  while(p!=NULL)
       {
         if(p->ISBN==ISBN)
          break;
          prev=p;
          p=p->next;
        }
  /*delete*/
  if(p==head)
  {   
     head=head->next;
     free(p);
   }
 else if(p==NULL)
     printf("There is no such book!");
   else
 {
    prev->next=p->next;
    free(p);
  }
}

/**************************update the book***********************************/void update(book_list* head,int ISBN[20])
{
  book_list* k;
  k=search(head,ISBN);
  if(k!=NULL)
  {
    printf("Please input the name of the book:\n");
    scanf("%s",k->name);
    printf("Please input the auther of the book:\n");
    scanf("%s",k->auther);
    printf("Please input the ISBN of the book:\n");
    scanf("%d",k->ISBN);
    printf("Please input the price of the book:\n");
    scanf("%f",k->price);
  }
}
 
/*************************output the book***********************************/
void output(book_list* head)
{
  book_list* p;
  p=head;
  while(p!=NULL)
  {
     printf("%s %s %d %.2f\n",p->name,p->auther,p->ISBN,p->price);
     p=p->next;
  }
}
