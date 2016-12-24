#include<stdio.h>
#include<stdlib.h>
#include"book.h"

Book*creat_list()
{
    int i;
    FILE*fp;
    if((fp=fopen("book_info.csv","r"))==NULL)
    {
	printf("Failure to open the file!\n");
	exit(1);
    }
    Book*head=(Book*)malloc(sizeof(Book));     //链表头结点
    Book*p=head;                               //工作指针，建立链表
    while(!feof(fp))
    {
	Book*pnew=(Book*)malloc(sizeof(Book));
        fscanf(fp,"%s%s%s%lf",pnew->name,pnew->author,pnew->ISBN,&pnew->price); 
   //   fread(pnew,sizeof(Book),1,fp);         //将文件数据写入链表
        if(feof(fp))                           //读取结束，跳出循环
	{
	    p->next=NULL;
	    head=head->next;               //创建链表时头结点为NULL，需指向后一结点
            return head;
        }
	p->next=pnew;
	p=pnew;
        p->next=NULL;
    }
  //  return head;
}

//Book*head=creat_list(); 全局变量只能用常量进行初始化

Book*search(Book*head,const char*ISBN)          //查询图书信息
{
    Book*p=head;
    while(p!=NULL)
    {
   	if(!strcmp(p->ISBN,ISBN))
        {
	   return p;                            //若找到匹配项，则返回结点地址
        }
        p=p->next;
    }
    return NULL;                                //若没有结点包含指定数据，则返回NULL
}

Book*delete(Book*head,const char*ISBN)
{
    Book *prev,*p;
    p=head;prev=NULL;
    while(p!=NULL)
    {
	if(!strcmp(p->ISBN,ISBN))               //查找满足条件的结点
            break;
	    prev=p;p=p->next;                   
    }
    if(p==NULL)
  	return NULL;    
    if(p==head)
	head=head->next;
    else
 	prev->next=p->next;
    free(p);                                    //释放p指向的结点空间
    return head;
}

void Book_insert(Book**head)                    //参数使用指针的指针，可改变传进来的实参head
{
    Book*newp=(Book*)malloc(sizeof(Book));      //创建新结点
    printf("Please input the name,the author,the ISBN and the price of the book:\n");
    scanf("%s%s%s%lf",newp->name,newp->author,newp->ISBN,&newp->price);
    newp->next=*head;
    *head=newp;
}

void Book_modify(Book*head,const char*ISBN)
{
    Book*p;
    p=search(head,ISBN);                        //查找所要修改的结点
    printf("Please input the name,the author,the ISBN and the price of the book:\n");
    scanf("%s%s%s%lf",p->name,p->author,p->ISBN,&p->price);
}

void Book_output(Book*head)                     //浏览图书记录
{
     Book*p=head;
     printf("Book     \t\tAuthor   \tISBN \tPrice\n");
    for(;p;p=p->next)
    {
        printf("%s\t%s\t%s\t%f\n",p->name,p->author,p->ISBN,p->price);
    }
}

int load(Book*head,const char *filename)
{
    Book*p=head;
    FILE *fp;
    int  cnt=0;
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
	printf("Failure to open the file.\n");
        return -1;
    }
    for(;p!=NULL;p=p->next)                     //读取文件数据
    {
	fscanf(fp,"%s%s%s%lf",p->name,p->author,p->ISBN,&p->price);
        cnt++;
    }
    fclose(fp);
    return cnt;                                 //返回读取的结构体数目
}

int save(Book*head,const char *filename)        //将数据存入文件
{
    FILE*fp;
    Book*p=head;
    fp=fopen(filename,"w");
    if(fp==NULL)
	return -1;
    for(;p;p=p->next)
    {
	fprintf(fp,"%s\t%s\t%s\t%f\n",p->name,p->author,p->ISBN,p->price);
    }
    fclose(fp);
    return 0;
}
 
Book*DeleteList(Book*head)
{
    Book*p;
    while(head!=NULL)                           //链表的头结点至尾结点逐个删除，直至链表为空
    { 
        p=head;
	head=head->next;
        free(p);
    }
    return NULL;
}      	
















 





























  	    

