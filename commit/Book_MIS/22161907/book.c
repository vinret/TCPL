#include<stdio.h>
#include<stdlib.h>
#include"book.h"

Book*creat_list()
{  int i;
   FILE*fp;
   if ((fp=fopen("book_info.csv","r"))==NULL)   // 打开文件book_info.csv,打开方式是“r”
   { printf("Failure to open the file!\n");
     exit(1);
    }
   Book*head=(Book*)malloc(sizeof(Book));     //链表头结点，malloc 申请空间
   Book*p=head;
   while (!feof(fp))
   { Book*pnew=(Book*)malloc(sizeof(Book));
     fscanf(fp,"%s%s%s%1f",pnew->name,pnew->author,pnew->ISBN,&pnew->price);
//将文件数据写入链表，链接结点
    if (feof(fp))
    { p->next=NULL;
      head=head->next;   //创建链表时头结点为NULL，需指向后一结点
      return head;
     }
     p->next=pnew;
     p=pnew;
     p->next=NULL;
   }    
}
//Book*head=creat_list(), 全局变量只能用常量初始化   ？？
Book*search(Book*head,const char*ISBN)
{   Book*p=head;
    while (p!=NULL)
    {   if (!strcmp(p->ISBN,ISBN))   //strcmp是比较p->ISBN与ISBN的大小，相等0，大则返回大于0
        {return p;
         }
        p=p->next;
     }
     return NULL;   //若没有结点包含指定数据，则返回NULL
}
Book*delete(Book*head,const char*ISBN)
{
    Book *prev,*p;
   p=head;prev=NULL;
    while (p!=NULL)
    {   if (!strcmp(p->ISBN,ISBN))
          break;
          prev=p;p=p->next;
     }
     if (p==NULL)
         return NULL;
     if (p==head)
         head=head->next;
      else 
        {  prev->next=p->next;  
      free(p); }  //释放p指向的结点空间
      return head;
}

void Book_insert(Book**head)  //参数使用指针的指针，可改变实参head
{
   Book*newp=(Book*)malloc(sizeof(Book));  // 创建新结点
   printf("Please input the name,the author ,the ISBN and the price of the book:\n");
   scanf("%s%s%s%1f",newp->name, newp->author,newp->ISBN,&newp->price);
   newp->next=*head;
   *head=newp;
}

void Book_modify(Book*head,const char*ISBN)
{  Book*p;
   p=search(head,ISBN);
   printf("Please input the name ,the author ,the ISBN and the price of the book:\n");
   fscanf("%s%s%s%1f",p->name,p->author ,p->ISBN,&p->price);
}

void Book_output(Book*head)
{
   Book*p=head;
   printf("Book   \t\tAuthor   \tISBN  \tprice\n");
   for (;p;p=p->next)
   {    printf("%s\t%s\t%s\t%f\n",p->name,p->author,p->ISBN,p->price);
   }
}

int load(Book*head,const char *filename)
{
   Book*p=head;
   FILE *fp;
   int cnt=0;
   fp=fopen(filename,"r");
   if (fp==NULL)
   {  printf("Failure to open the file.\n");
     return -1;
   }
   for (;p!=NULL;p=p->next)   //读取文件数据
   {   fscanf(fp,"%s%s%s%1f", p->name,p->author,p->ISBN,&p->price);
       cnt++；
   }
   fclose(fp);
    return cnt;
}       //返回读取的结构体数目

int save(Book*head,const char *filename)
{
   FILE *fp;
   Book*p=head;
   fp=fopen(filename,"w");
   if (fp==NULL)
      return -1;
   for (;p!=NULL;p->next)
    {  fprintf(fp,"%s\t%s\t%s\t%f\n", p->name,p->author,p->ISBN,p->price);   //将数据存入文件中，save fprintf ,
    }
    fclose(fp);   //关闭指定的文件
    return 0;
}

Book*DeleteList(Book*head)    //删除结点，返回NULL
{   Book*p;
    while (head!=NULL)
   {  p=head;
      head=head->next;
      free(p);
   }
   return NULL;
}
























































































