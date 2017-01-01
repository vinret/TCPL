#include <stdio.h>
#include "command.h"
int menu()
{
     int choice;
     printf("1 to output\n");
     printf("2 to save  \n");
     printf("3 to search\n");
     printf("4 to insert\n");
     printf("5 to delete\n");
     printf("0 to EXIT  \n");

     printf("And your choice would be");
     scanf("%d",&choice);
     return choice;
}
