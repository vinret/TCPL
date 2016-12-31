#include "book.h"
#include<stdio.h>
#include<stdlib.h>

int load(const char* fileName, Book_list bkl)
{
    Book_node *p=head;
    int size=0;
    char line[LINESIZE];
    FILE *fp;
    fp=fopen(fileName,"r");
    if (fp==NULL)
    {
        return -1;
    }
    while(fgets(line,LINESIZE,fp)!=NULL)
    {
         sscanf(line,"%s%s%s%f",p->name,p->writer,p->ISBN,p->price);
         p++;
         size++;
    }
    fclose(fp);
    return size;
}

int save(Book_list bkl, const char* fileName,int size)
{
    FILE *fp;
    int i=0;
    fp=fopen(filrName,"w");
    if (fp==NULL) return -1;
    for(i=0;i<size;i++)
       fprintf(fp,"%s\t%s\t%s\t%f\n",p->name,p->writer,p->ISBN,p->price);
    fclose(fp);
    return 0;
}

Book_node search(Book_list bkl, const char* ISBN)
{
    Book_node *p=head;
    while(p!=NULL)
    {
        if(strcmp(p->ISBN,ISBN)==0)
             return p;
        p=p->next;
    }
    return NULL;
}

void insert(Book_list bkl, Book_node book)
{
     Book_node *head=Book_list;
     Book_node *newp=(Book_node *)malloc(sizeof(Book_node));
     printf("请输入图书的书名、作者、ISBN、价格：\n");
     scanf("%s%s%s%f",&newp->name,&newp->writer,&newp->ISBN,&newp->price);
     newp->next=head;
     head=newp;
     return head;
} 

void delete(Book_list bkl, const char* ISBN)
{
     Book_node *prev,*p;
     prev=NULL;p=head;
     while(p!=NULL)
     {
	if(strcmp(p->ISBN,ISBN)==0)  break;
        prev=p;p=p->next;
     }
     if(p==NULL)  return head;    
     if(p==head)  head=head->next;
     else         prev->next=p->next;
     free(p);                                   
     return head;
}

void modify(Book_list bkl, const char* ISBN)
{
     Book_node *p;
     p=search(head,ISBN);
     printf("更新图书信息\n");
     printf("请输入新的书名、作者、ISBN、价格：\n")
     scanf("%s %s %S %f",&p->name,&p->writer,&p->ISBN,&p->price);
     getchar();
     return 0;
}
     
