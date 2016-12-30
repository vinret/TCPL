//图书管理信息系统 
//1. 图书的信息包括：书名、作者、ISBN、价格。 
//2. 功能包括： （1） 添加图书记录； （2） 查询图书记录； （3） 删除图书记录； （4） 修改图书记录； （5） 读盘与存盘：使用.csv文件保存；
//3. 将交互界面与业务逻辑分离。 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BOOKNUM 1000
struct book
{
   char name[1000];
   char author[1000];
   int ISBN;
   double price;
};
int size;

typedef struct book Book;
Book bookAry[BOOKNUM];

int menu();
int errCmd();
Book* insert(Book *pBookAry,int *pSize);
Book* search(Book *pBookAry,int size,char * bname);
int delete(Book *pBookAry,int* pSize,char * bname);
Book* update(Book *pBookAry,int size,char * bname);
int save(Book *pBookAry,int size);
char *my_gets(char str[],size_t len);
int loadArray(Book *pBookAry);

//pBookAry:书籍记录的结构体数组；size:数组的有效元素数量；bname:待查询/添加/删除的书籍名称。

//gets
char *my_gets(char str[],size_t len) 
 { 
 	int i; 
 	for(i=0;i<len;i++) 
 	{ 
 		scanf("%c",&str[i]); 
 		if(str[i]=='\n') break; 
 	} 
 	str[i]='\0'; 
 	return str; 
} 
 
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
 sscanf(line,"%s%s%d%lf",pBookAry->name,pBookAry->author,&pBookAry->ISBN,&pBookAry->price);
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

//菜单
int menu()
{
    printf("=== 图书管理系统菜单 ===\n");
    printf("(i)添加图书记录\n");
    printf("(s)查询图书记录\n");
    printf("(d)删除图书记录\n");
    printf("(u)修改图书记录\n");
    printf("(q)退出系统\n");
    printf("请输入命令：");
    return 0;
}

int errCmd()
{
    printf("错误命令！\n");
    return -1;
}

//main函数
int main()
{
  char cmd;
  int i,r;
  char bname[100];
  size=loadArray(bookAry);
  Book *pBook;
do
 {
    menu();
    cmd = getchar();
    getchar();
    if(cmd == 'q')
    {
       save(bookAry,size);
       break;
    }
    switch(cmd)
    {
     case'i':
       printf("输入新学生的信息：\n");
       pBook=insert(bookAry,&size);
       //showBookInfo(pBook);
       break;

     case's':
       printf("输入查询的书名：");
       my_gets(bname,100);
       pBook=search(bookAry,&size,bname);
       if(pBook=NULL)
       {
         printf("该书不存在！\n");
       }else{
        // showBookInfo(pBook);
       }
       break;  

     case'd':
       printf("输入被删除的书名：");
       my_gets(bname,100);
       r=delete(bookAry,&size,bname);
       if(r==0)
       {
          printf("成功删除书籍记录！\n");
       }else{
          printf("该书籍不存在，无法删除！\n");
       }
       break;

     case'u':
       printf("输入被修改的书名：");
       my_gets(bname,100);
       printf("修改书籍信息：\n");
       pBook=update(bookAry,size,bname);
       //showBookInfo(pBook);
       break;
     default:errCmd();
    }
 }while(1);
}
