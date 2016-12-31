#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"

int main()
{
  char cmd;
  int i,r;
  char bname[100];
  size=loadArray(bookAry);
  Book *pBook;
do
 {
    menu();
    cmd = getchar();
    getchar();
    if(cmd == 'q')
    {
       save(bookAry,size);
       break;
    }
    switch(cmd)
    {
     case'i':
       printf("输入新学生的信息：\n");
       pBook=insert(bookAry,&size);
       //showBookInfo(pBook);
       break;
     case's':
       printf("输入查询的书名：");
       my_gets(bname,100);
       pBook=search(bookAry,&size,bname);
       if(pBook=NULL)
       {
         printf("该书不存在！\n");
       }else{
        // showBookInfo(pBook);
       }
       break;
     case'd':
       printf("输入被删除的书名：");
       my_gets(bname,100);
       r=delete(bookAry,&size,bname);
       if(r==0)
       {
          printf("成功删除书籍记录！\n");
       }else{
          printf("该书籍不存在，无法删除！\n");
       }
       break;
     case'u':
       printf("输入被修改的书名：");
       my_gets(bname,100);
       printf("修改书籍信息：\n");
       pBook=update(bookAry,size,bname);
       //showBookInfo(pBook);
       break;
     default:errCmd();
    }
 }while(1);
}
