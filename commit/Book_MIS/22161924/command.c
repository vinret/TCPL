#include "command.h"
#include "book.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void menu()
{
     char fileName[]="books.csv";
     char cmd;
     int size;
     Book_node *head;
     
     do{
         printf("=*=*=图书信息管理系统=*=*=\n");
         printf("<s>查询图书信息\n");
         printf("<m>修改图书信息\n");
         printf("<i>添加图书信息\n");
         printf("<d>删除图书信息\n");
         printf("<o>输出图书信息\n");
         printf("<q>退出系统\n");
         printf("请输入命令：");
         
         cmd=getchar();
         getchar();
         if (cmd=='q')
         {
             saveAs(Book,size,fileName);
             break;
         }
         switch(cmd)
         {
             case's':
                  printf("请输入查询的书的ISBN：\n");
                  gets(ISBN);
                  bkl=search(Book,size,ISBN);
                  if(bkl==NULL)   printf("该图书不存在！\n");
                  else   printf("%s\t%s\t%S\t%f\n",bkl->name,bkl->writer,bkl->ISBN,bkl->price);
                  break;
             case'm':
                  printf("请输入被修改的书的ISBN：\n");
                  gets(ISBN);
                  printf("修改图书信息：\n");
                  bkl=modify(Book,size,ISBN);
                  printf("%s\t%s\t%S\t%f\n",bkl->name,bkl->writer,bkl->ISBN,bkl->price);
                  break;
             case'i':
                  printf("请输入新图书的信息：\n");
                  bkl=insert(Book,&size);
                  Output(bkl);
                  break;
             case'd':
                  printf("请输入被删除的书的ISBN：\n");
                  gets(ISBN);
                  bkl=delete(Book,&size,ISBN);
                  if(bkl==0)  printf("成功删除记录！\n");
                  else        printf("无法删除！\n");
                  break;
             case'o':
                  Output(head);
                  break;
             default:errCmd();
         }
       }while (1);
     int errCmd()
     {
         printf("Error Command!\n");
         return -1;
     }
}  




















} 

