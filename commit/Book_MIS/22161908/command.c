/*...........command.c..........*/
#include "command.h"

int Menu()
{
      int choice;
      printf("1......Output all book information\n");
	  printf("2......Insert book information\n");
	  printf("3......Search book information\n");
	  printf("4......Delete book information\n");
	  printf("5......Revise book information\n");
	  printf("6......Save book information\n");
	  printf("0......Exit\n");
	  scanf("%d",&choice);
	  return choice;
}

