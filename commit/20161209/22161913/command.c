/*.....command,h....*/
#include"command.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int menu()
{
    int choice;
    printf("1...输出图书信息\n");
    printf("2...插入图书信息\n");
    printf("3...查询图书信息\n");
    printf("4...删除图书信息\n");
    printf("5...添加图书信息\n");
    printf("0...退出\n");
    scanf("%d",&choice);
    return choice;
}


