#include"command.h"
void Menu()
{
    int a;
    printf("1.Output all book information\n");
    printf("2.Add book information\n");
    printf("3.Search book information\n");
    printf("4.Delete book information\n");
    printf("5.Update book information\n");
    printf("6.Save   book information\n");
    printf("0.Exit\n");
    printf("you need:");
    scanf("%d",&a);
    return a;
}//菜单
