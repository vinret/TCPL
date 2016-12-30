#include<stdio.h>
#include<las.h>
#include<ui.h>
#include<applogic.h>
int insert(Book aryBook[],Book *paryPrice[],int *pSize,Book b)//插入一本书
{
 int i;
 int p=0;
 int size=*pSize;
   if(size>=MAX)
     return -1;
     aryBook[size]=b;
   while(p<size && b.price>paryPrice[p]->price)//寻找插入位置，保持有序插入
     {
        p++
     }
   for (i=size-1;i>=p;i--)
        paryPrice[i+1]Boo=aryPrice[i];
        paryPrice[p]=&paryBook{size}；
        aryBook[size].idParyPrice=p;
        *pSize=*pSize++;	
return 0;
}
