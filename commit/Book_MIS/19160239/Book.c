#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Book.h"

/*PART_search information**/
Book* search(Book *pBookAry,int size,char *Bookname)
{
  int l,r,m;
  l=0,r=size-1;
  while(l<=r)
  {
    m=(l+r)/2;
    if(strcmp(Bookname,pBookAry[m].id)==0)
      return &pBookAry[m];
    else
      if(strcmp(Bookname,pBookAry[m].id)==0)
        r=m-1;
      else
        l=m+1;
  }
  return NULL;
}
/*PART_update information*/
Book* update(Book *pBookAry,int size,char *Bookname)
{
  Book* pBook;
  pBook=search(pBookAry,size,Bookname);
  printf("Update book information\n");
  pritnf("Bookname:");
  scanf("%s",&pBook->name);
  printf("Author:");
  scanf("%s",&pBook->author);
  printf("ISBN:");
  scanf("%d",&pBook->ISBN);
  printf("Price:");
  scanf("&d",&pBook->price);
  getchar();
  return 0;
}
/*PRAT_delete information*/
int delete(Book *pBookAry,int* pSize,char *Bookname)
{
  int i;
  Book* pBook;
  pBook=search(pBookAry, *pSize,Bookname);
  if(pBook==NULL)
  {
    return -1;/* information not found*/
  }
 /*delete them*/
  for(i=pBook-pBookAry;i< *pSize;i++)
  {
    pBookAry[i]=pBookAry[i+1];
  }
  (*pSize)--;
  return 0;
}
/*PRAT_insert information*/
Book* insert (Book *pBookAry,int *pSize)
{
  int i=0,p=0;
  Book* r=NULL;
  Book tmp;
  do
  {
    printf("Bookname:\n");
    scanf("%s",tmp.id);
    r=search(pBookAry, *pSize,tmp.id);
    if(r!=NULL)
      printf("This book has already exsited in the system!\n");
  }while(r!=NULL)
  printf("Bookname:");
  scanf("%s",&tmp.name);
  printf("Author:");
  scanf("%s",&tmp.author);
  printf("ISBN:");
  scanf("%d",&tmp.isbn);
  printf("Price:");
  scanf("%d",&tmp.price);
  getchar();
/*search the position*/
  for(i=0;i<*pSize;i++)
  {
    if(strcmp(tmp.name,pBookAry[i].name)<0)
    {
      p=i;
      break;
    }
    else
    {
      p++;
    }
  }
  if(p>=BOOKNUM)
  {
    return NULL;
  }
 /*insert*/
  for(i= *pSize-1;i>=p;i--)
  {
    pBookAry[i+1]=pBookAry[i];
  }
  pBookAry[p]=tmp;
  (*pSize)++;
  return &pBookAry[p];
}
/*PRAT_loadArray information*/
int loadArray(Book *pBookAry,char *fileName)
{
  Book *pBook=pBookAry;
  int size=0;
  char line[LINESIZE];
  FILE *fp;
  fp=fopen(fileName,"r");
  if(fp==NULL)
  {
    return -1;
  }
  while(fgets(line,LINESIZE,fp)!=NULL)
  {
sscanf(line,"%s%s%d%f%f%f",pBook->name,pBook->author,pBook->isbn,pBook->price);
    pBook++;
    size++;
  }
  fclose(fp);
  return size;
}
/*PART_read and write,saved as .csv*/
int saveAs(Book *pBookAry,int size,char *filename)
{
  FILE *fp;
  int i=0;
  fp=fopen(fileName,"w");
  if(fp==NULL)
  {
    return -1;
  }
  for(i=0;i<size;i++)
  {
    fprintf(fp,"%s\t",pBookAry->name);
    fprintf(fp,"%s\t",pBookAry->author);
    fprintf(fp,"%d\t",pBookAry->isbn);
    fprintf(fp,"%d\t",pBookAry->price);
    pBookAry++;
  }
  fclose(fp);
  return 0;
}
