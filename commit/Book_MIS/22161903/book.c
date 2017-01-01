#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
Book* search(Book *pStudAry,int size,char* qISBN)//查询模块   pStudAry：结构体数组，size：数组的有效元素数量，ISBN：待查编号
{
     while(pStudAry!=NULL){
         if(strcmp(qISBN,pStudAry->ISBN)==0) return pStudAry;
         pStudAry++;
}
     return NULL;
}

Book* insert(Book *pStudAry,int size)//插入
{
      int i;
      Book tmp;
      printf("编号:");
      scanf("%s", tmp.ISBN);
      if(search(pStudAry,size,tmp.ISBN)!=NULL) printf("此学号在系统中已经存在！\n");
      else{ 
       printf("书名:");
       scanf("%s",tmp.name);
       printf("作者:");
       scanf("%s",tmp.author);
       printf("价格:");
       scanf("%f",&tmp.prize);
       for (i=size -1;i >=0&&pStudAry[i].ISBN>tmp.ISBN;i--) pStudAry[i+1]=pStudAry[i];
       pStudAry[i+1]=tmp;
        
       return &pStudAry[size+1];
       }
}

Book* update(Book *pStudAry,int size,char * qISBN)//修改
{
   Book* pStud;
   pStud = search(pStudAry,size,qISBN);
   printf("更新书本信息\n");
   printf("书名：");
   scanf("%s",pStud->name);
   printf("作者：");
   scanf("%s",pStud->author);
   printf("价格：");
   scanf("%f",&pStud->prize);
   getchar();
   return 0;
}


int delete(Book *pStudAry,int *pSize,char *qISBN)//删除
{
   int i;
   Book* pStud;
   pStud = search(pStudAry,*pSize,qISBN);
   if(pStud==NULL) return -1;          //没找到删除的
   for(i = pStud- pStudAry;i < *pSize;i++) pStudAry[i] = pStudAry[i+1];
   (*pSize)--;
    return 0;
}



int errorCmd()
{
   printf("Error Command!\n");
   return -1;
}

int saveAs(Book *pStudAry,int size)//保存文件	
{
    FILE *fp;
	int i=0;
	fp=fopen("book.csv","w");
	if(fp==NULL) return -1;
	for (i=0;i<size;i++){
		fprintf(fp,"%s\t",pStudAry->name);
		fprintf(fp,"%s\t",pStudAry->author);
		fprintf(fp,"%s\t",pStudAry->ISBN);
		fprintf(fp,"%f\n",pStudAry->prize);
		pStudAry++;
	}
    fclose(fp);
	return 0;
}
