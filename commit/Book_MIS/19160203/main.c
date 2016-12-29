#include<stdio.h>
#include"dataaccess.h"
#include"ui.h"
int main(int argc,char **argv)
{
char cmd[3];
Book aryBook[MAX];
Book* partPrice[MAX];
int size=0;
char * filename ="Home\\TCPL\\TCPL\\commit\\Book_MIS\\19160203\\bookcase.csv";
int r;
loadArry(aryBook,paryPrice,&size,fileName);
do
{
menu();
scanf("%s",cmd);
r=processCommand(aryBook,paryPrice,&size,cmd);
if(r==0)
{
saveAs(aryBOOK,size,fileName);
break;}
}
while(r);
return 0;
}
