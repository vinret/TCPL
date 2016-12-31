#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "command.h"
#include "book.h"
int main()
{
 int choice;
 char isbn[14];
 book* head;
 head=load();
while(1)
{
  choice=menu();
  if(choice==6)
  {save(head);break;}
  switch (choice)
{
  case 1:
  printf("请输入书籍的ISBN码\n");
  scanf("%s",isbn);
  search(head,isbn);
  break;

  case 2:
  printf("请输入待添加图书的信息\n");
  head=insert(head);
  save(head);
  printf("添加成功\n");
  break;

  case 3:
  printf("请输入待删图书在ISBN码\n");
  scanf("%s",isbn);
  delete(head,isbn);
  break;

  case 4:
  output(head);
  break;

  case 5:
  printf("输入待更新书籍在ISBN码\n");
  scanf("%s",isbn);
  update(head,isbn);
  break;

  default:printf("指令错误!\n");
  printf("\n");
} while(1);
  return 0;
}
}

