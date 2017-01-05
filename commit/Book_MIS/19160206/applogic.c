#include<stdio.h>
#include<string.h>
#include"las.h"
#include"process.h"
#include"show.h"
int QueryByKeyword(Book aryBook[],int*pSize,char keyword[])//按照关键词查询
{
  int i=0;
  printf("Query Result\n");
  for(i=0;i<*pSize;i++)
     {
     if(strstr(aryBook[i].bookname,keyword)!=NULL)
        {
          showItem(aryBook,pSize，i)；
        }
     }
return 0；
}

int QueryByPrice(Book aryBook[],int *pSize,double min,double max)//按照价格查询
{
  printf("Query Result\n");
  for(i=0; i<*pSize; i++)
  {
    if (aryBook[i].price<=max && aryBook[i].price>=min)
        {			
          showItem(aryBook,pSize,i);
        }
return 0;
}

int update(Book aryBook[],int* pSize,char qISBN[])//更新
{
  int i=0;
    for (i=0;i<*pSize;i++)
     {
        if (strcmp(aryBook[i].isbn,qISBN)==0)
           {
              printf("Name\n");
              scanf("%s",aryBook[i].bookName);
              printf("Price\n");
              scanf("%lf",&aryBook[i].price);
                break;
           }
     }
	if (i==*pSize)
        { 
		printf("ISBN does not exist!\n");
     return -1;
        }
return 0;
}

	
int delete(Book aryBook[],Book* paryPrice[],int* pSize,char qISBN[])
{

  int i=0;
  int a1,a2;//a1 for book  a2 for price
	for (i=0;i<*pSize;i++)
    {
       if (strcmp(aryBook[i].isbn,qISBN)==0)
             {
                   a1 = i;
                   deleteBook(aryBook,pSize,a1);
                   a2 = i;
                   deletePrice(aryPrice,pSize,a2);
		   break;
	     }
	}
	if (i==*pSize)
	{
               printf("ISBN does not exist\n");
               return -1;
	}
	return 0;
}

//删除书名
int deleteBook(Book aryBook[],int* pSize,int a1)
{
	int i=0;
	for (i=a1; i<*pSize-1; i++)
      {
          aryBook[i]=aryBook[i+1];
      }
	return 0;
}

//删除价格
int deletePrice(Book* paryPrice[],int* pSize,int a2)
{
	int i=0;
	for (i=a2; i<*pSize-1; i++)
	{
		paryPrice[i]=paryPrice[i+1];
	}
	return 0;
}


