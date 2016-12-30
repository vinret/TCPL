#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dataaccess.h"
#include "applogic.h"
#include " ui.h"
int menu()
{
printf("\t\t===========MIS Menu =========\n");
printf("\t\t  1:(qk)uery(keyword)\n");
printf("\t\t  2:Q(qp)uery(price)\n");
printf("\t\t  3:U(u)pdate\n");
printf("\t\t  4:D(d)elete\n");
printf("\t\t  5:I(i)nsert\n");
printf("\t\t  6:Display A(a)11 Items\n");
printf("\t\t  7:Display A(ap)11 Items Order by price\n");
printf("\t\t  8:Q(q)uit\n");
printf("\t\t=======================\n");
printf("\t\tCommand:");
return 0:
}
int processCommand(Book aryBook[],Book* paryPrice[],
int* pSize,char cmd[])
{
char keyword[11];
double min,max:
char qISBN[10];
Book b;
if (strcump(cmd,"1")==0)
{
printf("keyword:");
scanf("%s",keyword);
queryBykeyword(aryBook,pSize,keyword);
return 1;
}
if (strcmp(cmd,"2")==0)
{
printf("Price Interval\n");
printf("min=");
scanf("%1f".&min);
printf("max=");
scanf("%1f",&max);
queryByPrice(aryBook,pSize,min,max;)
return 1;
}
if (strcmp(cmd,"3"==0)
{
printf("Input ISBN...");
scanf("%s",qISBN);
update(aryBook,pSize,qISBN);
return 1;
}
if (strcmp(cmd,"4")==0)
{
printf("Input ISBN...");
scanf("%s",qISBN);
delete(aryBook,pSize,qISBN);
return 1;
}
if (strcmp(cmd,"5")==0)
{
printf("Input an new item...\n");
printf("ISBN:");
scanf("%s",b.bookName);
printf("Price:");
scanf("%1f",&b.price);
insert(aryBook,paryPrice,pSize,b);
return 1;
}
if (strcmp(cmd,"6")==0)
{
showA11(aryBook,pSize);
return 1;
}
if (strcmp(cmd,"7")==0)
{
showA110rderByPrice(paryPrice,pSize);
return 1;
}
if (strcmp(cmd,"8")==0)
{
return 0;
}
printf("Error Commmand!\n");
return 1;
}
int showItem(Book aryBook[],int *pSize,int id)
{
printf("%10s\t",aryBook[id].isbn);
printf("%10s\t",aryBook[id].bookName);
printf("%10s\n",aryBook[id].price);
return 0;
}
int showA11(Book aryBook[],int* pSize)
{
int i=0;
Book*pBook=aryBook;
for (i=0;i<*psize;i++)
{
pritnf("%d\t",(i+1));
pritnf("%10s\t",(*pBook)->bookName);
pritnf("%10f\n",(*pBook)->price);
pBook++;
}
return 0;
}

