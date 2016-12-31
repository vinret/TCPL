#include<stdio.h>
#include"dataaccess.h"
#include"ui.h"

int main(int argc,char **argv)
{
  char cmd[3];
  Book aryBook[MAX];
  Book* paryPrice[MAX];
  int size=0;
  char * fileName="home\\TCPL\\commit\\Book_MIS\\19160205\\bookcase.csv";
  int r;
  loadArrary(aryBook,paryPrice,&size,fileName);
  do{
        menu();
        scanf("%s",cmd);
        r=processCommand(aryBook,paryPrice,&size,cmd);
        if(r==0)
        {
             saveAs(aryBook,size,fileName);
             break;
        }
    }while(r);
  return 0;
}

