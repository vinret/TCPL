#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"dataaccess.h"
#include"applogic.h"
#include"ui.h"

int menu()
{ 
     printf("\t\t===========MIS Menu =========\n");
  printf("\t\t  1:(qk)uery(Keyword)\n");
  printf("\t\t  2:Q(qp)uery(Price)\n");
  printf("\t\t  3:U(u)pdate\n");
  printf("\t\t  4:D(d)elete\n");
  printf("\t\t  5:I(i)nsert\n");
  printf("\t\t  6:Display A(a)ll Items\n");
  printf("\t\t  7:Display A(ap)ll Items Order by Price\n");
  printf("\t\t  8:Q(q)uit\n");
  printf("\t\t=================================================\n");
  printf("\t\tCommand:");
  return 0;
}

int processCommand(Book aryBook[],Book*paryPrice[],int*pSize,char cmd[])
{
      char keyword[11];
      double min,max;//price
      char qISBN[10];
  Book b;
       if(strcmp(cmd,"1")==0)
       {
             printf("keyword:");
             scanf("%s",keyword);
             queryByKeyword(aryBook,pSize,keyword);
       return 1;
       }
       if(strcmp(cmd,"2")==0)
       {
              printf("Price Interval\n");
              printf("min=");
              scanf("%lf",&min);
              printf("max=");
              scanf("%lf",&max);
              queryByPrice(aryBook,pSize,min,max);
       return 1;
       }
       if(strcmp(cmd,"3")==0)
       {
              printf("Input ISBN...");
              scanf("%s",qISBN);
              update(aryBook,pSize,qISBN);
        return 1;
        }
        if(strcmp(cmd,"4")==0)
        {
              printf("Input ISBN...");
              scanf("%s",qISBN);
              delete(aryBook,paryPrice,pSize,qISBN);
        return 1;
        }
        if(strcmp(cmd,"5")==0)
        {
              printf("Input an new item...\n");
              printf("ISBN:");
              scanf("%s",b.isbn);
              printf("Book Name:");
              scanf("%s",b.bookName);
              printf("Price:");
              scanf("%lf",&b.price);
              insert(aryBook,paryPrice,pSize,b);
        return 1;
        }
        if(strcmp(cmd,"6")==0)
        {
              showAll(aryBook,pSize);
        return 1;
        }
        if(strcmp(cmd,"7")==0)
        {
              showAllOrderByPrice(paryPrice,pSize);
        return 1;
        }
        if(strcmp(cmd,"8")==0)
        {
              return 0;//quit
        }
    printf("Error Command!\n");
        return 1;
}

int showItem(Book aryBook[],int*pSize,int id)
{
       printf("%10s\t",aryBook[id].isbn);
       printf("%10s\t",aryBook[id].bookName);
       printf("%10f\n",aryBook[id].price);
  return 0;
}

int showAll(Book aryBook[],int*pSize);
{
       int i=0;
       Book*pBook=aryBook;
         for(i=0;i<*pSize;i++)
         {
         printf("%d\t",(i+1));
         printf("%s\t",pBook->isbn);
         printf("%10s\t",pBook->bookName);
         printf("%10f\n",pBook->price);
         pBook++;
         }
       return 0;
}

int showAllOrderByPrice(Book*paryPrice[],int*pSize)
{
       int i=0;
       Book**pBook=paryPrice;
         for(i=0;i<*pSize;i++)
         {
         printf("%d\t",(i+1));
         printf("%s\t",(*pBook)->isbn);
         printf("%10s\t",(*pBook)->bookName);
         printf("%10f\n",(*pBook)->price);
         pBook++;
         }
       return 0;
}































