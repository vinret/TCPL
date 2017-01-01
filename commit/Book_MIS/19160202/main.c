#include <stdio.h>
#include "dataaccess.h"
#include "ui.h"
int main(int argc, char **argv)
{
char cmd[3];
Book aryBook[MAX];
Book* paryPrice[MAX];
int size=0;
char * fileName="Home\\TCPL\\commit\\BIMS_MIS\\19160202\\bookbase.csv";
int r;
loadArray(aryBook,paryPrice,&size,fileName);
do
{
menu();
scanf("%s,cmd);
r=processCommand(aryBook,paryprice,&size,cmd);
if (r==0)
{
saveAs(aryBook,size,fileName);
break;
}
}
while(r);
return 0;
}
