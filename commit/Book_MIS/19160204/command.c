#include<stdio.h>
#include"command.h"

void menu()
{
 printf("===menu===\n");
 printf("(i)insert book records\n");
 printf("(s)search book records\n");
 printf("(d)delete book records\n");
 printf("(m)modify book records\n");
 printf("(o)output all book records\n");
 printf("(q)log out\n");
 printf("Please input command:");
 return 0;
}

int errCmd()
{
 printf("Error Command!\n");
 return -1;
}
