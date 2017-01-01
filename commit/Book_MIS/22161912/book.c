#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
Book_list create()
{
    FILE *fp;
    fp=fopen("books.csv","r");
    if(fp==NULL)
    {
       printf("Cannot open the file.\n");
       exit(1);
    }
    Book_list head;
    head=(Book_list)malloc(sizeof(Book_list));
    Book_list p=head;
    while(0==feof(fp))
    {
        Book_list newp;
        newp=(Book_list)malloc(sizeof(Book_list));
        fscanf(fp,"%s%s%s%f",newp->name,newp->writer,newp->ISBN,&newp->price);
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
}
int load(Book_list head,const char* fileName)
{
    Book_list p=head;
    FILE *fp;
    fp=fopen("books.csv","r");
    if(fp==NULL)
    {
       printf("Cannot open the file.\n");
       return -1;
    }
    while(p!=NULL)
    {
       fscanf(fp,"%s\t%s\t%s\t%f\n",p->name,p->writer,p->ISBN,&p->price);
       p=p->next;
    }
    fclose(fp);
    return 0;
}
int save(Book_list head,const char* fileName)
{
    Book_list p=head;
    FILE *fp;
    fp=fopen("books.csv","w");
    if(fp==NULL)
       return -1;
    while(p!=NULL)
    {
        fprintf(fp,"%s\t%s\t%s\t%f\n",p->name,p->writer,p->ISBN,p->price);
        p=p->next;
    }
    fclose(fp);
    return 0;
}
Book_list deletelist(Book_list head)
{
    Book_list p;
    while(head!=NULL)
    {
        p=head;
        head=head->next;
        free(p);
    }
    return NULL;
}
void insert(Book_list head,Book_list newp)
{
    Book_list prev,p;
    prev=NULL;
    p=head;
    while(p!=NULL)
    {
        if(strcmp(p->ISBN,newp->ISBN)>0)
           break;
        prev=p;
        p=p->next;
    }
    newp->next=p;
    if(p==head)
       head=newp;
    else
       prev->next=newp; 
}
Book_node find(Book_list head,const char* ISBN)
{
    Book_list p=head;
    while(p!=NULL)
    {
        if(0==strcmp(p->ISBN,ISBN))
           return p;       
        p=p->next;
    }  
    return NULL;
}
void delete(Book_list head,const char* ISBN)
{
    Book_list prev,p;
    prev=NULL;
    p=head;
    while(p!=NULL)
    {
        if(0==strcmp(p->ISBN,ISBN))
           break;
        prev=p;
        p=p->next;
    }
    if(p!=NULL)
    { 
       if(p==head)
          head=head->next;
       else  
          prev->next=p->next;
       free(p);
    }
}
void modify(Book_list head,const char* ISBN)
{
    Book_list p;
    p=find(head,ISBN);
    printf("Please input the name,the writer,ISBN and the price of the book:\n");
    scanf("%s%s%s%f",p->name,p->writer,p->ISBN,&p->price);
}
void output(Book_list head)
{
    Book_list p=head;
    while(p!=NULL)
    {
        printf("%s\t%s\t%s\t%f\n",p->name,p->writer,p->ISBN,p->price);
        p=p->next;
    }
}

