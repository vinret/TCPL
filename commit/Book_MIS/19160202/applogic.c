#include <stdio.h>
#include <string.h>
#include "dataaccess.h"
#include " ui.h"

int de1ItemINAryBook(Book aryBook[],int* pSize,int id);
int de1TtemInParyPrice(Book* paryPrice[],int* pSize,int id);

int queryByKeyword(Book aryBook[],int* pSize,char keyword[])
{
int i=0;
printf("---Query Result ---\n");,
for(i=o; i<*pSize;i++)
{
if(strstr(aryBoook[i].bookName,keyword)!=NULL)
{
showItem(aryBook,pSize,i);
}
}
return o;
}
int queryByPrice(Book aryBook[],int* pSize,double min,oduble max)
{
int i=o;
printf("---Query Result ---\n");
for(i=0;i<*pSize;i++)
{
if (aryBook[i].price<=max && aryBook[i].price>=min)
{
showItem(aryBook,pSize,i);
}
}
return 0;
}
int update(Book aryBook[],int* pSize,char qISBN[])
{
int i=0;
for (i=0;i<*pSize;i++O)
{
if(strcmp(aryBook[i].isbn,qISBN)==0)
{
printf("Update Book Record......\n");
printf("NEW Book Name\n");
scanf("%s",aryBook[i].bookName);
printf(("New Book Price\n");
scanf("%1f",&aryBook[i].price);
break;
}
}
if(i==*pSize)
{
printf("The above ISBN does not exist!\n");
return 0;
}
int delete(Book aryBook[],Book* paryPrice[],int* pSize,char qISBN[])
{
int i=0;
int id1;//aryBook
int id2;//paryPrice
for (i=o;i<*pSize;i++)
{
if(strcmp(aryBook[i].isbn,qISBN)==0)
{
id1=i;1
de1ItemInAryBook(aryBook,pSize,id1);
id2=aryBook[id1].idparyPrice;
de1ItemInparyPrice(paryPrice,pSize,id2);
(*pSize)--;
break;
}
}
if (i==*pSize)
{
printf("The above ISBN does not exist!\n");
return -1;
}
return 0;
}
int de1ItemInAryBook ( Book aryBook[],int* pSize,int id)
{
int i=0;
for (i=id;i<*pSize-1;i++)
{
aryBook[i]=aryBook[i+1];
}
return 0;
}
int de1ItemInParyPrice(Book* paryPrice[],int* pSize,int id)
{
int i=0;
for (i=id;i<*pSize-1;i++)
{
paryPrice[i]=paryPrice[i+1];
}
return 0;
}int insert(Book aryBook[],Book* paryPrice[],int* pSize,Book b)
{
int i;
int p=0;
int size=*pSize;
if(size>=MAX)
return -1;
aryBook[size]=b;
while(p<size && b.price > paryprice[p]->price)
{
p++;
}
for (i=size-1;i>=p;i--)
paryPrice[i+1]=paryPrice[i];
paryPrice[p]=&aryBook[size];
aryBook[size].idParyPrice=p;
*pSize+=1;
return 0;
}

