#include<stdio.h>
#include<stdlib.h>
#include"book.h"
Book*search(Book*head,const char*ISBN)
{
  Book*p=head;
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
Book*update(Book*head,const char*ISBN)
{
  Book*p;
  p=search(head,ISBN);
  printf("更新图书记录\n");
  printf("书名：");
  scanf("%s",p->name);
  printf("图书编号：");
  scanf("%s",p->ISBN);
  printf("作者：");
  scanf("%s",p->author);
  printf("价格：");
  scanf("%f",p->price);
  getchar();
  return head;
}
int insert(Book**head)
{
  Book*newp=(Book*)malloc(sizeof(Book));
  printf("输入所要添加的图书信息书名 编号 作者 价格：");
  scanf("%s%s%s%f",newp->name,newp->ISBN,newp->author,&newp->price);
  newp->next=*head;
  *head=newp;
  return head;
}
int delete(Book*head,const char*ISBN)
{
  Book*prev,*p;
 prev=NULL;p=head;
while(p!=NULL)
{
  if(p->ISBN==ISBN)
   break;
   prev=p;p=p->next;
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
int load(Book*head,const char*filename)
{
  Book*p=head;
 int i;
 FILE*fp;
if((fp=fopen(filename,"r"))==NULL)
{
  printf("打开失败！\n");
  return -1;
}
for(;p!=NULL;p=p->next)
{
fscanf(fp,"%s%s%s%f",p->ISBN,p->name,p->author,&p->price);
i++;
}
fclose(fp);
return i;
}
int save(Book*head,const char*filename)
{
  Book*p=head;
  FILE*fp;
if((fp=fopen(filename,"w"))==NULL)
{
printf("无法打开文件！\n");
return -1;
}
for(;p!=NULL;p=p->next)
{
  fprintf(fp,"%s\t%s\t%s\t%f\n",p->ISBN,p->name,p->author,&p->price);
  fclose(fp);
}
  return 0;
}
