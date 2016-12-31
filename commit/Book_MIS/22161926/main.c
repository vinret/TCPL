#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"

int main()
{
  do{
       Menu();     //显示菜单
       cmd = getchar();       //读取命令
       getchar();
       if(cmd =='Q')
       {
         Save(pbook,n);
         printf("Having been saved successfully\n");
         break;
       }
       switch(cmd)
       {
         case 'I':
           printf("输入新添加的图书信息：\n");
           scanf("%s %s %d %f",book1.name,book1.author,&book1.ISBN,&book1.price);
           n=Insert(book,n,book1);
           Output(book,n);
           break;
         case 'S':
           printf("请输入你要查找的图书信息：\n");
           scanf("%d",&ISBN); 
           k=Search(book,n,ISBN);
           if(k!=-1)
           printf("%s %s %d %f\n",book[k].name,book[k].author,book[k].ISBN,book[k].price);
           else printf("该图书不存在！\n");
           break;
         case 'D':
           printf("请输入你想要删除的图书记录：\n")；
           scanf("%d",&ISBN);
           n=Delete(book,n,ISBN);
           Output(book,n);
           break;
         case 'R':
           printf("请输入你想要修改的图书记录：\n")；
           scanf("%d",&ISBN);
           k=Search(book,n,ISBN);
           if(k!=-1)
           {
              printf("%s %s %d %f\n",book[k].name,book[k].author,book[k].ISBN,book[k].price);
              printf("修改图书信息：\n");
              scanf("%s %s %d %f\n",book[k].name,book[k].author,&book[k].ISBN,&book[k].price);
           }
           else printf("该图书不存在\n")；
           Output(book,n);
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
