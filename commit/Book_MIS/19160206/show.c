#include<stdio.h>
#include<string.h>
#include"applogic.h"
int  showItem(Book aryBook[],int *pSize,int id)
{
  printf("%10s\t",aryBook[id].isbn);
  printf("%10s\t",aryBook[id].bookName);
  printf("%10f\n",aryBook[id].price);	
  return 0;
}

int showAll(Book aryBook[],int *pSize)
{
 int i=0;
  Book* pBook = aryBook;
  for (i=0; i<*pSize; i++)
   {
      printf("%d\t",(i+1));
      printf("%s\t",pBook->isbn);
      printf("%10s\t",pBook->bookName);
      printf("%10f\n",pBook->price);
      pBook++;
   }
return 0;
}

int showOBP(Book* paryPrice)
{
 int i=0;
 Book** pBook=paryPrice;
 for (i=0;i<=*pSize;i++)
  {
    printf("%d\t",(i+1));
    printf("%s\t",(*pBook)->isbn);
    printf("%10s\t",(*pBook)->bookName);
    printf("%10f\n",(*pBook)->price);
    pBook++;
  }
return 0；
}


