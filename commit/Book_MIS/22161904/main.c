#include<stdio.h>
#include<stdlib.h>
#include"book.h"
#include"menu.h"
#include"command.h"

int main()
{
    struct Book book[10]={{"book1","author1","001",10},
                          {"book2","author2","002",11},
                          {"book3","author3","003",12},
                          {"book4","author4","004",13}};
    int n=4;
    Output(book,n)
    menu();
 do{
    cmd=getchar();
    getchar();

    switch(cmd)
    {
       case 'i':
            struct Book book_;
            printf("输入新书的信息：\n");
            scanf("%s%s%s%lf",book_.name,book_.author,book_.ISBN,book_.price)
            n=Insert(book[],n,book_);
            Output(book,n);
            break;
       case 's':
            int k;
            float ISBN;
            printf("输入查询的书号：");
            scanf("%f",&ISBN);
            k=Search(book[],n,ISBN);
            if(k!=-1)
               printf("%s,%s,%s,%f",book[k].name,book[k].author,book[k].ISBN,book[k].price);
            else
               printf("no found");
            break;
       case 'u':
            float ISBN;
            printf("输入修改的书号：");
            scanf("%f",&ISBN);
            Update(book[],ISBN);
            Output(book,n);
            break;
       case 'd':
            float ISBN;
            printf("输入删除的书号：");
            scanf("%f",&ISBN);
            n=Delete(book[],n,ISBN);
            Output(book,n);
            break;
       default:errCmd();





    Output(book,n);
 
    return 0;
}
