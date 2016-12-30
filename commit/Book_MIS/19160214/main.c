#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"
int main()
{int r,size,ISBN;
char filename,cmd,pBOOK;
while(1)
{ menu();
cmd=getchar();
getchar();
if(cmd=='5')
{save(bookary,size,filename);
 break;}
switch(cmd)
{case'1':
pBOOK=insert(bookary,&size);
Output(pBOOK,size);
break;
case'2':
printf("input the ISBN:");
scanf("%d",&ISBN);
pBOOK=search(bookary,size,ISBN);
if(pBOOK==NULL)
{printf("This book was not recorded!\n");}
else(Output(pBOOK,size));
break;
case'3':
printf("input the ISBN:");
scanf("%d",&ISBN);
printf("revise the book record:\n");
pBOOK=update(bookary,size,ISBN);
Output(pBOOK,size);
break;
case'4':
printf("input the ISBN of book:\n");
scanf("%d",&ISBN);
r=delete(bookary,&size,ISBN);
if(r==0)
{printf("Successfully deleted\n");}
else
{printf("This record is not existence,can not delete\n");}
break;
}}
return 0;
}

