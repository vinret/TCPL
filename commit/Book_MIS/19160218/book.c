#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

/* 
 * Load all books from file to list.
 * fileName: .csv file format
 */
Books* load()
{FILE*fp;
 if((fp=fopen("books.csv","r"))==NULL)
 {printf("Fail to open the file!\n");exit(1);}
 Books* head=(Books*)malloc(sizeof(Books));
 Books* p=head;
 char p1[30],p2[30],p3[30],p4[30];                           
 while(!feof(fp))
   {Books* pnew=(Books*)malloc(sizeof(Books));
    fscanf(fp,"%s%s%s%f",pnew->name,pnew->author,pnew->isbn,&pnew->price);
    if(feof(fp))
      {fclose(fp);
       p->next=NULL;
       head=head->next;
       return head;}
    p->next=pnew;
    p=pnew;
    p->next=NULL;}
}

/*
 * Save all books from list to file.
 * fileName .csv file format
 */
void save(Books* head)
{FILE*fp;
 if((fp=fopen("books.csv","w"))==NULL)
 {printf("Fail to open the file!");exit(1);}
 Books* p;
 p=head;
 while(p!=NULL)
   {fprintf(fp,"%s\t%s\t%s\t%.2f\n",p->name,p->author,p->isbn,p->price);
    p=p->next;}
 fclose(fp);
}

/*
 * Find one book according to ISBN.
 */
Books* search(Books* head,char ISBN[14])
{Books* p;
 p=head;
 while(p!=NULL)
   {if(strcmp(p->isbn,ISBN)==0) 
    {printf("%s\t%s\t%s\t%.2f\n",p->name,p->author,p->isbn,p->price);
     return p;}
    p=p->next;}
 printf("There's no such book!\n");
 return NULL;
}

/*
 * Insert one book to list.
 */
Books* insert(Books* head)
{Books* pnew=(Books*)malloc(sizeof(Books));
 printf("Please input name of the book:\n");
 scanf("%s",pnew->name);
 printf("Please input author of the book:\n");
 scanf("%s",pnew->author);
 printf("Please input isbn of the book:\n");
 scanf("%s",pnew->isbn);
 printf("Please input price of the book:\n");
 scanf("%f",&pnew->price);
 pnew->next=head;
 head=pnew;
 return head;
}

/*
 * Delete one book from list according to ISBN.
 */
void delete(Books* head,char ISBN[14])
{Books *p,*prev;
 p=head;prev=NULL;
 while(p!=NULL)
   {if(strcmp(p->isbn,ISBN)==0) break;
    prev=p;p=p->next;}
 if(p==head) {head=head->next;free(p);}
 else if(p==NULL) printf("There's no such book!\n");
      else {prev->next=p->next;free(p);}
}

/*
 * Update one book from list according to ISBN.
 */
void update(Books* head,char ISBN[14])
{Books* Search;
 Search=search(head,ISBN);
 if(Search!=NULL) 
   {printf("Please input updated name of the book:\n");
    scanf("%s",Search->name);
    printf("Please input updated author of the book:\n");
    scanf("%s",Search->author);
    printf("Please input updated isbn of the book:\n"); 
    scanf("%s",Search->isbn);
    printf("Please input updated price of the book:\n");
    scanf("%f",&Search->price);}
}

/*Output book items.*/
void output(Books* head)
{Books* p;
 p=head;
 while(p!=NULL)
   {printf("%s\t%s\t%s\t%.2f\n",p->name,p->author,p->isbn,p->price);
    p=p->next;}
}

