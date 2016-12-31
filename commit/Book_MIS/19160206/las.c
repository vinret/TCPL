#include<stdio.h>
#include<string.h>
#include"applogic.h"
#include"insert.h"
int load(Book aryBook[],Book* paryPrice[],int* pSize,char* fileName)
{
  Book b;
  char line[LINESIZE];
  FILE *fp;
  fp=fopen(fileName,"r");
  char *fileName= "~/TCPL/commit/Book_MIS/19160206/bookbase.csv";
    if (fp==NULL)
        {
          return -1;
        }
    while (fgets(line,LINESIZE,fp)!=NULL)
     {
        parse(&b,line,',')；
        insert(aryBook,paryPrice,pSize,b);
     }
     fclose(fp);
     return 0 ;
}

int parse(Book *pBook,char split)
{
  char *p=line;
  char tmp[100];
  int j=0;
  while (*p!=split)
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
  sscanf(tmp,"%lf",&pBook->price);
return 0;
}
  
int save(Book* pBook, int size, char* fileName)
{
 FILE *fp;
 int i=0;
 fp=fopen(fileName,"w");
  if(fp==NULL)
    {
     return -1;
    }
  for (i=0; i<size; i++)
    {
         fprintf(fp, "%s,",(*pBook).isbn);
         fprintf(fp, "%f,\n",(*pBook).price);
         pBook++;
    }
        fclose(fp);
return 0;
}
     
