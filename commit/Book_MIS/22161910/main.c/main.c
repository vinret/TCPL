#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"command.h"
#include"book.h"
int main()
{
 char cmd,n[14];
 char filename[]="books.csv";
 Book*head=creat_list;
 Book*bk1=NULL;
 menu();
 cmd=getchar();   //读取命令
 getchar();
 if(cmd=='q')
{
  save(head,filename);
  break;
}
switch(cmd)
{
  case's':
      printf("输入查询图书的编号：");
      scanf("%s",n);
      bk1=search(head,n);
  if(bk1==NULL)
{
  printf("该书不存在！\n");
  else
{
  printf("%s\t%s\t%s\t%f\n",bk1->ISBN,bk1->name,bk1->author,bk1->price);
}
  break;
case'u':
   printf("输入被修改的图书编号：");
   scanf("%s",n);
   printf("修改图书信息：\n");
   bk1=update(head,n)
   printf("%s\t%s\t%s\t%f\n",bk1->ISBN,bk1->name,bk1->author,bk1->price);
   break;
case'i':
   printf("输入新的图书信息：");
   bk1=insert(&head);
   printf("%s\t%s\t%s\t%f",bk1->ISBN,bk1->name,bk1->author,bk1->price);
   break;
case'd':
   printf("被删除的图书编号：");
   scanf("%s",n);
   bk1=delete(head,n);
   if(bk1==NULL);
{
    printf("无法删除！\n");
}
else
{
   printf("%s\t%s\t%s\t%f",bk1->ISBN,bk1->name,bk1->author,bk1->price);
}
  break;
default:errCmd();
}while(1);
return 0;
}
int errCmd()
{
  printf("Error Command!\n");
  return -1;
}
