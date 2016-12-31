#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"

int main()
{
 char cmd;
 char qISBN[13];
 int i;
 Book *k,*head;
 
 load(head);
 do
 {
  menu();
  cmd=getchar();
  getchar();
  if(cmd=='q')
  {
   save(head);
   break;
  }
  switch(cmd)
  {
   case'i':
       insert(head);
       break;
   case's':
       printf("Please input the ISBN of the book which you want to search:");
       scanf("%s",qISBN);
       k=search(head,qISBN);
       if(k==NULL)
        printf("Not found!\n");
       else
       {
        printf("Book\tAuthor\tISBN\tPrice\n");
        printf("%s\t%s\t%s\t%1f\n");
       }
       break;
   case'd':
       printf("Please input the ISBN of the book which you want to delete:");
       scanf("%s",qISBN);
       i=delete(head,qISBN);
       if(i=0)
        printf("Delete success!");
       else
        printf("Not found!\n");
       break;
   case'm':
       printf("Please input the ISBN of the book which you want to modify:");
       scanf("%s",qISBN);
       modify(head,qISBN);
       break;
   case'o':
       output(head);
       break;
   default:errCmd();
  }
 }while(1);

 head=DeleteList(head);
 return 0;
}
 
