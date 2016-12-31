#include"stdio.h"
#include"las.h"
#include"menu.h"
#include"show.h"
#include"process.h"
int main()
{
  char cmd[3];
  Book aryBook[MAX];
  Book* paryPrice[MAX];
  int size=0;
  int r;
  load(aryBook,paryPrice,&size,fileName);
  menu();
  scanf("%s",&cmd);
  r=process(aryBook,paryPrice,&size,cmd);
return 0;
}
