#include "book.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int load(Book* bkl)
{

  Book* current=NULL,*prev=NULL,*head=NULL;
  int k,i,j;
  char c,temp[60]={0},a[3];

 
  FILE* fp;
  fp=fopen("books.csv","r");
  if(fp==NULL)
  {
    printf("无法打开books.csv!\n");
    exit(1);
  }

current=(Book *)malloc(sizeof(Book));
head=(Book *)malloc(sizeof(Book));
prev=(Book *)malloc(sizeof(Book));
 
while(!feof(fp))
{ j=0;
  fscanf(fp,"%s",temp);
printf("0  %s  ",temp); 
for(i=0;i<strlen(temp);++i)
  {
	  if(temp[i]==',')
	  { temp[i]=0;
	    a[j]=i;
	    j++;
	  }
  }
printf("1  %s",temp);    
       strcpy(current->name,temp);
        printf("2  %s  ",temp[a[0]+1]); return 0; strcpy(current->author,&temp[a[0]+1]);
        printf("3");  strcpy(current->ISBN,&temp[a[1]+1]);
        printf("4");  strcpy(current->price,&temp[a[2]+1]);
          memset(temp,0,sizeof(char) *60);
  
}
 
  fclose(fp);
  return 0;
}

int main()
{
  Book* a=NULL;
  load(a);
  
  return 0;
}
