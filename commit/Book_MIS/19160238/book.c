#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"book.h"
 
//加载模块
   int loadArray(Book *pBookAry)
  {
    Book *pBook=pBookAry;
    int size=0;
    char line[100];
    FILE *fp;
    fp=fopen("book.csv","r");
    if(fp==NULL)
    {
       return -1;
    }
    while(fgets(line,100,fp)!=NULL)
    {
   scanf(line,"%s%s%d%lf",pBookAry->name,pBookAry->author,&pBookAry->ISBN,&pBookAry->price);
    pBook++;
    size++;
    }
    fclose(fp);
    return size;
}
//添加图书记录
  Book* insert(Book *pBookAry,int *pSize)
  {
   int i=0,p=0;
   Book* r=NULL;
   Book tmp;
   do
   {
     printf("书名：:");
     scanf("name=%s",tmp.name);
     r=search(pBookAry,*pSize,tmp.name);
     if(r!=NULL)
        printf("此书已存在系统中！");
   }while(r!=NULL);
     printf("书名：");
     scanf("name=%s",tmp.name);
     printf("作者：");
     scanf("author=%s",tmp.author);
     printf("ISBN：");
   scanf("%d",&tmp.ISBN);
   printf("价格：");
     scanf("%lf",&tmp.price);
     getchar();

   for(i=0;i<*pSize;i++)
   {
      if(strcmp(tmp.name,pBookAry[i].name)<0)
      {
         p=i;
         break;
      }else{
         p++;
      }
    }
    if(p>=BOOKNUM)
    {
       return NULL;
    }
  for(i= *pSize-1;i>=p;i--)
    {
        pBookAry[i+1]=pBookAry[i] ;
    }
    pBookAry[p]=tmp;
    (*pSize)++;
    return &pBookAry[p];
    }
//查询图书记录
   Book* search(Book *pBookAry,int size,char * bname)
   {
     int l,r,m;
     l=0,r=size-1;
     while(l<=r)
     {
      m=(1+r)/2;
      if(strcmp(bname,pBookAry[m].name)==0)
       return &pBookAry[m];
     else
     if(strcmp(bname,pBookAry[m].name)<0)
       r=m-1;
  else
       l=m+1;
    }
    return NULL;
}
//删除图书
int delete(Book *pBookAry,int* pSize,char * bname)
{
    int i;
    Book* pBook;
    pBook=search(pBook, *pSize,bname);
    if(pBook==NULL)
    {
       return -1;
    }
    for(i=pBook-pBookAry;i< *pSize;i++)
    {
       pBookAry[i]=pBookAry[i+1];
    }
    (*pSize)--;
    return 0;
}
//修改图书记录
Book* update(Book *pBookAry,int size,char * bname)
{
      Book* pBook;
      pBook=search(pBookAry,size,bname);
      printf("更新书籍信息\n");
      printf("书名：");
      scanf("%s",pBook->name);
      printf("作者：");
      scanf("%s",pBook->author);
      printf("ISBN:");
      scanf("%d",&pBook->ISBN);
      printf("价格：");
      scanf("%lf",&pBook->price);
      getchar();
      return 0;
}
//读盘与存盘：使用.csv文件保存
int save(Book *pBookAry,int size)
{
    FILE *fp;
    int i=0;
    fp=fopen("book.csv","w");
    if(fp==NULL)
    {
       return -1;
    }
    for(i=0;i<size;i++)
    {
        fprintf(fp,"%s\t",pBookAry->name);
        fprintf(fp,"%s\t",pBookAry->author);
        fprintf(fp,"%d",pBookAry->ISBN);
        fprintf(fp,"%lf\n",pBookAry->price);
        pBookAry++;
    }
    fclose(fp);
    return 0;
}

