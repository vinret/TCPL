#include "book.h"
#include <stdio.h>
#include <stdlib.h>

int output(struct Book book[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%s,%s,%d,%f\n",book[i].name,book[i].author,book[i].isbn,book[i].price);
}

int load(struct Book *pbook)
{
    FILE *fp;
    int i;
    fp=fopen("book.csv","r");
    for(i=0;feof(fp)==0;i++)
        fscanf(fp,"%s,%s,%d,%f",pbook[i].name,pbook[i].author,&pbook[i].isbn,&pbook[i].price);
    fclose(fp);
    return i-1;
}

int save(struct Book *pbook,int n)
{
    FILE *fp;
    int i;
    if((fp=fopen("book.csv","w"))==NULL)
    {
       printf("NULL\n");
       exit(1);
    }
    for(i=0;i<n;i++)
       fprintf(fp,"%s,%s,%d,%f",pbook[i].name,pbook[i].author,&pbook[i].isbn,&pbook[i].price);
    fclose(fp);
}


int search(struct Book book[],int n,int isbn)
{
     int i;
     for(i=0;i<n;i++)
         if(book[i].isbn==isbn) 
            return i;
     return -1;
}
int insert(struct Book book[],int n,struct Book book1)
{
     int i;
     for(i=n-1;i>=0&&book[i].isbn;i--)
         book[i+1]=book1;
     return n+1;
}
int delete(struct Book book[],int n,int isbn)
{
     int i;
     int k=search(book,n,isbn);
     if(k==-1)  return n;
     for(i=k;i<n;i++)
         book[i]=book[i+1];
     return n-1;
}



