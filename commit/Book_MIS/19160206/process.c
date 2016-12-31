#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"applogic.h"
#include"las.h"
#include"show.h"
int process(Book aryBook[],Book* paryPrice[],int *pSize,char cmd[])
{
  char keyword[8];
  double min,max;
  char qISBN[10];
  if (strcmp(cmd,"1"==0))//1 keyword
   { 
      printf("Keyword:\n");
      scanf("%s,&Keyword");
      QueryByKeyword(aryBook,pSize.keyword);
      return 1;
    }
  if (strcmp(cmd,"2")==0)//2 price
    {
     printf("Price\n
             min=  max=\n  ");
     scanf("%lf %lf",&min,&max);
     return 1;
    }
  if (strcmp(cmd,"3")==0);//3 更新
     {
     printf("input ISBN");
     scanf("%s",&qISBN);
     update(aryBook,pSize,qISBN);
     return 1;
     }
  if (strcmp(cmd,"4")==0)//4删除
     {
     printf("ISBN");
     scanf("%s",&qISBN);
     delete(aryBook,paryPrice,pSize,qISBN);
     return 1;
     }
  if (strcmp(cmd,"5")==0)//5插入
    {
     printf("ISBN");
     scanf("%s",b.isbn);
     printf("bookname");
     scanf("%s",b.bookName);
     printf("price");
     scanf("%lf",&b.price);
     insert(aryBook,paryPrice,pSize,b);
     return 1;
    }
  if(strcmp(cmd,"6")==0)//6 showall
    {
    showAll(aryBook,pSize);
    return 1;
    }
  if(strcmp(cmd,"7")==0)//order by price
    {
    showOBP(pratPrice,pSize);
    return 1;
    }
  if(strcmp(cmd,"8")==0)//quit
    {
    return 0;
    }
   printf("not a valid command");
return 0;
}

