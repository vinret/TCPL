#include<stdio.h>
int Insert(struct Book book[],int n)
{
    book[n]=book_;
    return n+1;
}//添加函数
 
int Search(struct Book book[],int n,float ISBN)
{
    int i;
    for(i=0;i<n;i++)
        if(book[i].ISBN==ISBN)
           return i;
    return -1;
}//查询函数

void Update(struct Book book[],float ISBN)
{
     int k=Search(book,n,ISBN);
     if(k==-1) break; 
     printf("输入修改信息\n");
     printf("书名：");
     scanf("%s",book[k].name);
     printf("作者：");
     scanf("%s",book[k].author);
     printf("价格：");
     scanf("%f",&book[k].price);
}//修改函数

int Delete(struct Book book[],int n,float ISBN)
{
    int i;
    int k=Search(book,n,ISBN);
    if(k==-1) return n;
    for(i=k;i<n;i++)
        book[i]=book[i+1];
    return n-1;
}//删除函数
 
void Output(struct Book book[],int n)
{
     int i;
     for(i=0;i<n;i++)
         printf("%s,%s,%s,%f\n",book[i].name,book[i].author,book[i].ISBN,book[i].price);
}//输出函数
