#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"


/*
 *output book items.
 */
void output(book* head)
{
 book* p;
 p=head;
 while(p!=NULL)
{ printf("%s\t%s\t%s\t%f\n",p->name,p->authur,p->isbn,p->price);
  p->next;};
}


/*
 *Insert one book to list.
 */
book* insert(book* head)
{
 book* newp=(book*)malloc(sizeof(book));
 printf("输入图书名\n");
 scanf("%s",newp->name);
 printf("输入作者名\n");
 scanf("%s",newp->authur);
 printf("输入图书ISBN码\n");
 scanf("%s",newp->isbn);
 printf("输入图书价格\n");
 scanf("%d",newp->price);
 newp->next=head;
 head=newp;
 return head;
}

/*
 *delete one book from list according to ISBN.
 */
void delete(book* head,char isbn[14])
{
 book* p;
 book* newp;
 p=head;
 newp=NULL;
while(p!=NULL)
{
 if(strcmp(p->isbn,isbn)==0)
 break;
 newp=p;p=p->next;
};
if(p==head)
{
 head=p->next;
 free(p);printf("删除成功\n");
}
else if(p==NULL)
printf("无此书\n");
else
{ newp->next=p->next;free(p);printf("删除成功\n");}
}

/*
 *load all books from file to list.
 *filenmae: .csv file format
 */
book* load()
{
 FILE* fp;
 book* head=(book*)malloc(sizeof(book));
 book* p=head;
 char p1[40],p2[40],p3[40],p4[40];
 if((fp=fopen("book.csv","r"))==NULL)
 printf("fail to open the file\n");
 while(!feof(fp))
{
 book* newp=(book*)malloc(sizeof(book));
 fscanf(fp,"%s %s %s %f",newp->name,newp->authur,newp->isbn,&newp->price);
 if(feof(fp))
{
 fclose(fp);
 p->next=NULL;
 head=head->next;
 return head;
}
 p->next=newp;
 p=newp;
 p->next=NULL;}
}

/*
 *find one book according to  ISBN.
 */
book* search(book* head,char isbn[14])
{
 book* p;
 p=head;
 while(p!=NULL)
{
 if(strcmp(p->isbn,isbn)==0)
{
 printf("%s\t%s\t%s\t%f\n",p->name,p->authur,p->isbn,p->price);return p;
}
 p=p->next;
};
printf("fail to find the book\n");
return NULL;
}


/*
 *save all books from list to file.
 *file name .csv file format
 */
void save(book* head)
{
 FILE* fp;
 if((fp=fopen("book.csv","w"))==NULL)
 printf("fail to open the file!\n");
 book* p;
 p=head;
 while(p!=NULL)
{
 fprintf(fp,"%s%s%s%f",p->name,p->authur,p->isbn,p->price);
 p=p->next;
}
 fclose(fp);
 printf("保存完毕\n");
}

/*
 *update one book from list according to ISBN.
 */
void update(book* head,char isbn[14])
{
 book* Search;
 Search=search(head,isbn);
 if(Search!=NULL)
{
 printf("请输入书名\n");
 scanf("%s",Search->name);
 printf("请输入作者名\n");
 scanf("%s",Search->authur);
 printf("请输入ISBN码\n");
 scanf("%s",Search->isbn);
 printf("请输入价格\n");
 scanf("%f",&Search->price);
}}

