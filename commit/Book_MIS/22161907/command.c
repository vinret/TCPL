#include"command.h"

int Menu()
{   int choice
    printf("1.Output all book information\n");
    printf("2.Insert  book information\n");
    printf("3.search book information\n");
    printf("4.Delete book information\n");
    printf("5.Revise book information\n");
    printf("6.save book information\n");
    printf("0.Exit\n");
    scanf("%d\n", &choice);
    return choice;
}
