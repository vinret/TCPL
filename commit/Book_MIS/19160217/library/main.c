#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"
int main()
{
 int n;
 int ISBN[20];
 book_list* head;
 head=load();
 do
   {
     menu();
     scanf("%d",&n);
     if(n==5)
      {
        save(head);
        break;
      }
      switch(n)
    {
      case 1:
            {
               printf("Please input the information of the book\n");
               head=insert(head);
               save(head);
               break;
             }
      case 2:
            {
              printf("Please input the ISBN of the book:\n");
              scanf("%d",ISBN);
              search(head,ISBN);
              break;
            }
      case 3:
            {
              printf("Please input the ISBN of the book:\n");
              scanf("%d",ISBN);
              delete(head,ISBN);
              break;
            }
      case 4:
            {
               printf("Please input the ISBN of the book:\n");
               scanf("%d",ISBN);
               update(head,ISBN);
               break;
            }
      case 6:
            {
              output(head);
              break;
            }
      default:printf("Error command!\n");
    }
   printf("\n");
  }while(1);
return 0;
}
