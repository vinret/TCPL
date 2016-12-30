#include"book.h"
#include<stdio.h>
#include<string.h>
/********output*******/
void Output(Book *pbookary,int size)
{int i;
 for(i=0;i<size;i++)
{printf("%s,%s,%d,%f\n",pbookary->name,pbookary->writer,pbookary->ISBN,pbookary->price);}}
/*******chaxun********/
Book* search(Book *pbookary,int size,int ISBN)
{int i;
 for(i=0;i<size;i++)
if(pbookary[i].ISBN==ISBN)
return &pbookary[i];
else 
return NULL;}
/******tianjia*******/
Book* insert(Book *pbookary,int size)
{int i=0,p=0;
Book* r=NULL;
Book tmp;
do{printf("ISBN:");
scanf("%d",&tmp.ISBN);
r=search(pbookary,size,tmp.ISBN);
if(r!=NULL)
printf("The ISBN has existed!\n");}
while(r!=NULL);
printf("the name of book:");
scanf("%s",tmp.name);
printf("the writer of book:");
scanf("%s",tmp.writer);
printf("the price of book");
scanf("%f",&tmp.price);
getchar();
for(i=0;i<=size;i++)
{if(strcmp(tmp.ISBN,pbookary[i].ISBN)<0)
{p=i;
break;}
else{p++;}
}
if(p>=BOOKNUM)
{return NULL;}
for(i=size-1;i>=p;i--)
{pbookary[i+1]=pbookary[i];}
pbookary[p]=tmp;
(size)++;
return &pbookary[p];
}
/******xiugai*********/
Book* update(Book *pbookary,int size,int ISBN)
{Book* pBOOK;
 pBOOK=search(pbookary,size,ISBN);
printf("update the information of book\n");
printf("the name of book:");
scanf("%s",pBOOK->name);
printf("the writer of book:");
scanf("%s",pBOOK->writer);
printf("the price of book:");
scanf("%f",pBOOK->price);
getchar();
return 0;
}
/*******shanchu*******/
int delete(Book *pbookary,int size,int ISBN)
{int i;
Book* pBOOK;
pBOOK=search(pbookary,size,ISBN);
if(pBOOK==NULL)
{return -1;}
for(i=pBOOK-pbookary;i<size;i++)
{pbookary[i]=pbookary[i++];}
(size)--;
 return 0;
}
/********jiazai*********/
int loadarray(Book *pbookary,char * filename)
{Book *pBOOK=pbookary;
 int size =0;
char line[LINESIZE];
FILE *fp;
fp=fopen(filename,"r");
if(fp==NULL)
{return -1;}
while(fgets(line,LINESIZE,fp)!=NULL)
{scanf(line,"%s%s%d%f",pBOOK->ISBN,pBOOK->name,pBOOK->writer,pBOOK->price);
 pBOOK++;
size++;}
fclose(fp);
 return size;}
/********baocun*******/
int save(Book *pbookary,int size,char * filename)
{FILE *fp;
int i=0;
fp=fopen(filename,"w");
if(fp==NULL)
{return -1;}
for(i=0;i<size;i++)
{fprintf(fp,"%d\t",pbookary->ISBN);
 fprintf(fp,"%s\t",pbookary->name);
 fprintf(fp,"%s\t",pbookary->writer);
 fprintf(fp,"%f\t",pbookary->price);
 pbookary++;
}
fclose(fp);
return 0;
}
