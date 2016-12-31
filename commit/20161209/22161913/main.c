#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"
int main()
{
    int choice;
    struct Book book[10];
    struct Book bk1;
    struct Book *pbk;
    pbk=book;
    int n=load(pbk);
    int i,ISBN;
    while(1)
    {  choice=menu();
       if(choice==0);  break;
    switch(choice)
    {
     case 1:output(book,n); break;
     case 2:{ printf("请输入你要增加的图书信息：");
              scanf("%s %s %d %f",bk1.name,bk1.writer,&bk1.ISBN,&bk1.price);
            n=insert(book,n,bk1);
            output(book,n);
            break;}
     case 3:{ printf("请输入你要查询的图书书号：");
              scanf("%d",&ISBN);
              i=find(book,n,ISBN);
              if(i!=-1) printf("%s %s %d %f\n",book[i].name,book[i].writer,book[i].ISBN,book[i].price);
              break;}
     case 4:{ printf("请输入你想要删除的图书书号：");
              scanf("%d",&ISBN);
              n=delete(book,n,ISBN);
              output(book,n); 
              break;}
     case 5:{ printf("请输入你想要修改的图书书号：");
              scanf("%d",&ISBN);
              i=find(book,n,ISBN);
              if(i!=-1){  
              printf("%s %s %d %f\n",book[i].name,book[i].writer,book[i].ISBN,book[i].price);
              printf("请输入图书新信息：");
              scanf("%s %s %d %f",book[i].name,book[i].writer,&book[i].ISBN,&book[i].price);}
              else  printf("无法查询到\n");
              output(book,n);
              break;}
     case 6:{  save(pbk,n);
               printf("已保存\n");
               break;}}
     }
     return 0;
}

            
              
