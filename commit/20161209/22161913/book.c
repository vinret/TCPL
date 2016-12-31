/*.....book.h....*/
#include"book.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int load(struct Book *pbk)
{
    FILE *fp;
    int i;
    fp=fopen("book.csv","r");
    for(i=0;fscanf(fp,"%s %s %d %f",pbk[i].name,pbk[i].writer,&pbk[i].ISBN,&pbk[i].price)!=EOF;i++)
    fclose(fp);
    return i;
}
void save(struct Book *pbk,int n)
{
    FILE *fp;
    int i;
    if((fp=fopen("book.csv","w"))==NULL)
    {
        printf("NULL\n");
        exit(1);        //退出程序
    }
    for(i=0;i<n;i++)
    fprintf(fp,"%s %s %d %f\n",pbk->name,pbk->writer,pbk->ISBN,pbk->price);
    fclose(fp);
}
int find(struct Book book[],int n,int ISBN)
{
    int i;
    for(i=0;i<n;i++)
      if(book[i].ISBN==ISBN)  return i;
    return -1;
}
int insert(struct Book book[],int n,struct Book bk1)
{
    int i;
    for(i=n-1;i>=0&&book[i].ISBN>bk1.ISBN;i--)
      book[i+1]=book[i];
      book[i+1]=bk1;
      return n+1;
}
int delete(struct Book book[],int n,int ISBN)
{
     int i;
     int k=find(book,n,ISBN);
     if(k=-1)   return n;
     for(i=k;i<n;i++)  book[i]=book[i+1];
     return n-1;
}
void output(struct Book book[],int n)
{
     struct Book *pbk;
     pbk=book;
     while(pbk<book+n){
      printf("%s %s %d %f\n",(*book).name,(*book).writer,(*book).ISBN,(*book).price);
     pbk++;}
}    
