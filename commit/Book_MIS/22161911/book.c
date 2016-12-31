#include"book.h"
int Load(struct Book *pbook)
{
    FILE *fp;
    int i;
    fp=fopen("book.csv","r");
    for(i=0;feof(fp)==0;i++)
       fscanf(fp,"%s %s %d %f",pbook[i].name,pbook[i].author,&pbook[i].ISBN,&pbook[i].price);
    fclose(fp);
    return i-1;
}//读取文件

void Output(struct Book book[],int n)
{
     struct Book *pbook;
     pbook=book;
     while(pbook<book+n)
     {
          printf("%s,%s,%d,%f\n",pbook->name,pbook->author,pbook->ISBN,pbook->price);
          pbook++;
     }
}//输出

int Add(struct Book book[],int n,struct Book book1)
{
    printf("Please input the book's information which you want to add:");
    scanf("%s %s %d %f",book1.name,book1.author,&book1.ISBN,&book1.price);
    int i;
    i=n+1;
    book[i]=book1;
    return i;
}//添加记录

int Search(struct Book book[],int n,int ISBN)
{
    printf("Please input the book's ISBN which you want to search:");
    scanf("%d",&ISBN);
    int i;
    for(i=0;i<n;i++)
        if(book[i].ISBN) return i;
    return -1;
    
}//查找图书

int Delete(struct Book book[],int n,int ISBN)
{
    printf("Please input the book's ISBN which you want to delete:");
    scanf("%d",&ISBN);  
    int i;
    int k=Search(book,n,ISBN);
    if (k==-1) return n;
    for(i=k;i<n;i++)
       book[i]=book[i+1];
    return n-1;
}//删除记录

int Update(struct Book book[],int n,int ISBN)
{
    printf("Please input the book's ISBN which you want to revise:");
    scanf("%d",&ISBN);
    int k=Search(book,n,ISBN);
    if(k!=-1)
   {
      printf("%s %s %d %f\n",book[k].name,book[k].author,book[k].ISBN,book[k].price);
      printf("Please input the new information of the book:");
      scanf("%s %s %d %f",book[k].name,book[k].author,&book[k].ISBN,&book[k].price);
   }
   else printf("No found.\n");
   return n;
}//修改记录

void Save(struct Book *pbook,int n)
{
     FILE *fp;
     int i;
     if((fp=fopen("book.csv","w"))==NULL)
     {
         printf("NULL\n");
         exit(i);
     }
     for(i=0;i<n;i++)
         fprintf(fp,"%s %s %d %f\n",pbook[i].name,pbook[i].author,pbook[i].ISBN,pbook[i].price);
         fclose(fp);
}//保存文件
