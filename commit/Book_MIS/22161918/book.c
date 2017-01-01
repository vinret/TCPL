#include <stdio.h>
#include <stdlib.h>
#include "book.h"
mybook * creatload()
{
FILE * fp;
fp=fopen("books.csv","r");
if(fp==NULL)  //建立联系
{
printf("error!");
exit(1);
}
mybook * head=(mybook*)malloc(sizeof(mybook));
mybook * head1=head;
mybook * p=head;
while(!feof(fp))
{
mybook * new=(mybook*)calloc(10,sizeof(mybook));
fscanf(fp,"%s%s%d%f",new->name,new->writer,&new->ISBN,&new->price);  //数据转移
head1->next=new;
head1=new;
head1->next=NULL;
new++;
if(feof(fp))//释放第一个头
{
head=head->next;
free(p);
}
}
fflush(fp);
if(fclose(fp))
printf("无法打开文件\n");
return head;
}
mybook * search(mybook * head,const int ISBN)
{
mybook * p=head;
while(p!=NULL)
{
if(p->ISBN==ISBN)
{return p;}//找到ISBN返回其地址
p=p->next;
}
return NULL;//找不到则返回NULL
}
mybook * del(mybook * head,const int ISBN)
{
mybook * p1;
mybook * p2;
p1=head;
while(p1!=NULL)
{if(p1->ISBN==ISBN) break;
p2=p1;
p1=p1->next;
}
p2->next=p1->next;
free(p1);
return head;
}
mybook * add(mybook * head,const int ISBN)
{
FILE * fp;
mybook * pnew;
mybook * p;
fp=fopen("books.csv","a");
if(fp==NULL)
{
printf("error!");
exit(1);
}
p=head;
pnew=(mybook*)malloc(sizeof(mybook));
printf("请依次输入书名 作者 书号 价格(书号不能重叠！)：");
scanf("%s %s %d %f",pnew->name,pnew->writer,&pnew->ISBN,&pnew->price);
while(p!=NULL)
{p=p->next;}
p=pnew;
pnew->next=NULL;
fprintf(fp,"%s %s %d %f\n",pnew->name,pnew->writer,pnew->ISBN,pnew->price);
fclose(fp);
return p;
}
void allput(mybook * head)
{
mybook * p=head;
printf("name\twriter\tISBN\tprice\n");
while(p!=NULL)
{
printf("%s\t%s\t%d\t%f\n",p->name,p->writer,p->ISBN,p->price);
p=p->next;
}
}
mybook * update(mybook * head,const int ISBN)
{
mybook * p=head;
while(p!=NULL)
{
if(p->ISBN==ISBN)
{printf("请输入更改后的信息：\n");
printf("书名：");scanf("%s",p->name);printf("\n");
printf("作者：");scanf("%s",p->writer);printf("\n");
printf("书号：");scanf("%d",&p->ISBN);printf("\n");
printf("价格：");scanf("%f",&p->price);printf("\n");
break;}
p=p->next;
}
return p;
}
int save(mybook * head)
{
mybook * p=head;
FILE * fp;
fp=fopen("books.csv","w");
if(fp==NULL)
{
return -1;
}
while(p!=NULL)
{
fprintf(fp,"%s\t",p->name);
fprintf(fp,"%s\t",p->writer);
fprintf(fp,"%d\t",p->ISBN);
fprintf(fp,"%f\n",p->price);
p=p->next;
}
fclose(fp);
return 0;
}
mybook * deletelist(mybook * head)
{
mybook * p1=head;
mybook * p2=head;
if(p1==NULL) return NULL;
else
{
while(p1!=NULL)
{
p1=p1->next;
free(p2);
p2=p1;
}}
return NULL;
}
void oneput(mybook * pbook)
{
printf("%s\t%s\t%d\t%f\n",pbook->name,pbook->writer,pbook->ISBN,pbook->price);
}    
