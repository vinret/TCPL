#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #define N 100
 #define PF printf
 #define SF scanf
void main()
 {
     int choice,n=0;
     for( ; ; )
     {  
         system("cls");
         {
         PF("\t\t*****************图书信息管理系统*****************\n");
         PF("\t\t*\t\t|1.图书信息录入                  *\n");
         PF("\t\t*\t\t|2.图书信息浏览                  *\n");
         PF("\t\t*\t\t|3.图书信息查询                  *\n");
         PF("\t\t*\t\t|4.图书信息的删除                *\n");
         PF("\t\t*\t\t|5.图书信息的插入                *\n");
         PF("\t\t*\t\t|6.退出系统                      *\n");
         PF("\t\t*****************图书信息管理系统*****************\n\n\n");
         PF("\t\t请输入以上序号进行选择:\n");
         SF("%d",&choice);
         }
     switch(choice)
     {
     case 1:n=luru(book,n);//录入  book[0]
         system("pause");break;
     case 2:paixu(book,n);//liulan(book,n);//浏览
        system("pause");break;
     case 3:chaxun(book,n);//查询
        system("pause");break;
     case 4:n=del(book,n);
         system("pause");break;
     case 5:n=charu(book,n);
         system("pause");break;
     case 6:exit(0);
         system("pause");
     default :PF("输入有误,请重新输入!\n");
         system("pause");break;
     }
 }
 }

