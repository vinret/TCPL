#include"book.h"
#include<stdio.h>
#include<stdlib.h>
char *book;
void output(const char* book,Book *plist)
{
	printf("书籍\t作者\tisbn\t价格\t");
	int size=0;
	 char line[180];
	 FILE *fp;
	 fp=fopen("book.csv","r");
	 while (fgets(line,180,fp) != NULL)
	 {
		 sscanf(line,"%s%s%s%f",plist->name,plist->author,plist->isbn,&plist->price);
		 printf("%s%s%s%f",plist->name,plist->author,plist->isbn,plist->price);
		 plist++;
		 size++;
	 }
}


int load(const char* book,Book *plist)      //从文件中加载所有书籍
 {
	 

	 int size=0;
	 char line[180];
	 FILE *fp;
	 fp=fopen("book.csv","r");
	 if (fp==NULL)
	  {return -1;}
	 while (fgets(line,180,fp) != NULL)
	 {
		 sscanf(line,"%s%s%s%f",plist->name,plist->author,plist->isbn,&plist->price);
		 plist++;
		 size++;
	 }
	 fclose(fp);
	 return size;
 }

int save(Book *plist,char* book)   //书籍数据存盘
 {
	 FILE *fp;
	 int i=0,size=load(book,plist);
	 fp=fopen("book.csv","w");
	 if (fp==NULL)
	 { return -1;}
	 
	 for (i=0;i<save;i++)
	 {
		 fprintf(fp,"%s%s%s%f",plist->name,plist->author,plist->isbn,&plist->price);
		 plist++;
	 }
	 fclose(fp);
	 return 0;
 }

Book_node find(Book *plist,char* isbn)   //根据isbn查找一本书
 {
	 printf("请输入你想搜寻书籍的isbn号");
	 gets(isbn);
int size=load(book,plist);
	 int i=0,r=size-1;
	 while (i<=r)
	 {
		 if(strcmp(isbn,plist[i].isbn)==0)
		 {
			 printf("%s\t%s\t%s\t%f\n",plist->name,plist->author,plist->isbn,&plist->price);
			 return &plist[i];
		 }
	 }
	 printf("查无此书");
       	 return NULL;
 }

void insert(Book *plist,Book_node book)     //增加一本书
 {
	 int i,p,size=load(book,plist);
	 Book* r=NULL;
	 Book tem;
	 printf("isbn:");
	 scanf("%s",tem.isbn);
	 printf("书名:");
	 scanf("%s",tem.name);
	 printf("作者:");
	 scanf("%d",tem.author);
	 printf("价格：");
	 scanf("%f",tem.price);
         for (i=0;i<size;i++)
	         {
		      if (strcmp(tem.isbn,plist[i].isbn)<0)
		      {
	                  p=i;												          break;
	               }else{											                         p++;								
		            } 												   }										                  if (p>=booknum)
	          {																										        return NULL;										          }
          for (i=size-1;i>=p;i--)											 plist[i+1]=plist[i];									          plist[p]=tem;
	  save(plist,book);
 }
	
		    										         void delete(Book *plist,const char* isbn)     //删除一本书
													   {    
														   printf("请输入要删除书籍的isbn:");
	   Book tem;										                   int i,p,size=load(book,plist);
           scanf("%s",tem.isbn);
           for (i=0;i<size;i++)												 if (strcmp(tem.isbn,plist[i].isbn)==0)
	         {
                         p=i;
			 break;												 }												    for (i=p;i<size-1;i++)										    plist[i]=plist[i+1];
	    save(plist,book);
  }

