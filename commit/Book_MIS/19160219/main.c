#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"
#include "command.h"
int main()
{int n;
 char ISBN[14];
 Books* head;
 head=load();
 do
  { menu();
    scanf("%d",&n);
    if(n==5) {save(head);break;}
    switch(n)
      {case 1:
         printf("Please input information of the book\n");
         head=insert(head);
         save(head);
         break;
       case 2:
         printf("PLease input ISNB of the book:");
         scanf("%s",ISBN);
         search(head,ISBN);
         break;
       case 3:
         printf("PLease input ISNB of the book:");
         scanf("%s",ISBN);
         delete(head,ISBN);
         break;
       case 4:
         printf("PLease input ISNB of the book:");
         scanf("%s",ISBN);
         update(head,ISBN);
         break;
       case 6:
         output(head);
         break;
       default:printf("Error Command!\n");}
     printf("\n");
     }while(1);
 return 0;}


