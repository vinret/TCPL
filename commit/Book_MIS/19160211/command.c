#include <stdio.h>
#include "command.h"

int menu()
{
 int choice;
 printf("欢迎使用我校图书系统\n");
 printf("请输入您要执行的指令序号\n");
 printf("  1 查找图书\n");
 printf("  2 添加图书\n");
 printf("  3 删除图书\n");
 printf("  4 查看所有书籍\n");
 printf("  5 更新书籍信息\n");
 printf("  6 退出系统\n");
 scanf("%d",&choice);
 return choice;
}
