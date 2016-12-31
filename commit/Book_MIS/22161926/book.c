#include"book.h"
void Output(struct Book book[],int n)
{
   int i;
   struct Book *pbook;
   pbook=book;
   for(i=0;i<n;i++)
   {
     printf("%s,%s,%d,%f\n",pbook->name,pbook->author,pbook->ISBN,pbook->price);
   }
}
int Search(struct Book book[],int n,int ISBN)
{
    int i;
    for(i=0;i<n;i++)
      if(book[i].ISBN==ISBN)
        return i;   //查找成功，返回下标
    return -1;     //查找失败，返回-1
}
int Load(struct Book *pbook)
{
   FILE *fp;
   int i;
   fp=fopen("book.csv","r");
   for(i=0;feof(fp)==0;i++)
           fscanf(fp,"%s %s %d %f",pbook[i].name,pbook[i].author,&pbook[i].ISBN,&pbook[i].price);
   fclose(fp);
   return i-1;
}
void Save(struct Book *pbook,int n)
{
   FILE *fp;
   int i=0;
   if((fp=fopen("book.csv","w"))==NULL)
   {
      printf("NULL\n");
      exit(1);
   }
   for(i=0;i<n;i++)
       fprintf(fp,"%s %s %d %f\n",pbook[i].name,pbook[i].author,pbook[i].ISBN,pbook[i].price);
   fclose(fp);
}
int Delete(struct Book book[],int n,int ISBN)
{
   int i;
   int k=Search(book,n,ISBN);
   if(k==-1) return n;    //不存在满足条件的数组元素
   for(i=k;i<n;i++)
      book[i]=book[i+1];
   return -1;
}
int Insert(struct Book book[],int n,struct Book book1)
{
     int i;
     for(i=n-1; i>=0&&book[i].ISBN>book1.ISBN;i--)
       book[i+1]=book[i];
     book[i+1]=book1;
     return n+1;
}
