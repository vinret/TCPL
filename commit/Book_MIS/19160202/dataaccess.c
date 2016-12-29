#include <stdio.h>
#include <string.h>
#include "dataaccess.h"
#include "applogic.h"
int loadArray(Book aryBook[],Book* paryprice[],int*pSize,char* fileName)
{
Book b;
char line[LINESIZE];
FILE 8fp;
fp=fopen(fileName,"r");
if (fp==NULL)
{
return -1;
}
while (fgets(line,LINESIZE,fp) !=NULL)
{
parse(&b,line,',');
insert(aryBook,paryPrice,pSize,b);
}
fclose(fp);
return 0;
}
int parse(Book *pBook,char *line,char split)
{
char * p =line;
char tmp[100];
int j;
j=0;
while (*p !=split)
{
tmp[j++]=*p;
p++;
}
tmp[j]='\0';
strcpy(pBook->isbn,tmp);
p++;
j=0;
while (*p!=split)
{
tmp[j++]=*p;
p++;
}
tmp[j]='\0';
strcpy(pBook->bookName,tmp);
p++;
j=0;
while (*p!=split)
{
tmp[j++]=*p;
p++;
}
tmp[j]='\0';
sscanf(tmp,"%1f",&pBook->price);
return 0;
}
int saveAs(Book* pBook,int size, char* fileName)
{
FILE *fp;
int i=o;
fp=fopen(fileName,"w");
if (fp==NULL)
{
return -1;
}
for (i=0;i<size;i++)
{
fprintf(fp,"%s,",(*pBook).isbn);
fprintf(fp,"%s,",(*pBook).bookName);
fprintf(fp,"%f,\n",(*pBook).price);
pBook++;
}
fclose(fp);
return 0;
}


