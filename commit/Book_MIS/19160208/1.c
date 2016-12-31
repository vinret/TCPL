#include"1.h"
#include"command.h"
#include<stdio.h>
#include<string.h>

void Add()          /* 添加  */
{
	int m=0;
	char n='1';
	int i=-1;
	while(n=='1')
	{
		i++;
		printf("#######################################################################\n");
        printf("#######################################################################\n");
		printf("######                     图书信息添加                          ######\n");
	    printf("######  ———————————————————————————————————————————————————————  ######\n");
		printf("######             请输入图书书名：                              ######\n");
		scanf("%s",&book[i].name);
		printf("######             请输入图书作者：                              ######\n");
		scanf("%s",&book[i].writer);
		printf("######             请输入图书ISBN：                              ######\n");
		scanf("%s",&book[i].ISBN);
		printf("######             请输入图书价格：                              ######\n");
		scanf("%f",&book[i].price);
		printf("######  ———————————————————————————————————————————————————————  ######\n");
		printf("#######################################################################\n");
		printf("继续输入<1>，返回<0>");
		scanf("%s",&n);
     }
	 m=i;
	 FILE *fp;
	 fp=fopen("book.scv","a+");
	 i=0;
	 for(i=0;i<=m;i++)
	 {
		 fwrite(&book[i],sizeof(struct book),1,fp);
	 }
	 fclose(fp);
}


void Search()
{   
	FILE *fp;
	int i;
	int s=0;
	char n[20],m;
	fp=fopen("book.scv","r");
    printf("#######################################################################\n");
	printf("######                        图书查找                           ######\n");
	printf("######  ———————————————————————————————————————————————————————  ######\n");
	printf("######             请输入图书书名：                              ######\n");
	printf("######  ———————————————————————————————————————————————————————  ######\n");
	printf("#######################################################################\n");
    scanf("%s",&n);
	for(i=0;fread(&book[i],sizeof(struct book),1,fp)!=0;i++)
	{
		if(strcmp(n,book[i].name)==0)
		{
            printf("此书的信息为：\n");
		    printf("书名:%s\n作者:%s\nISBN:%s\n价格:%f\n",book[i].name,book[i].writer,book[i].ISBN,book[i].price);
		}
	}
	fclose(fp);
}

void Delete()
{
	FILE *fp1;
	FILE *fp2;
	FILE *fp;
	char n[20];
	int j=0,i;
    fp=fopen("book.scv","r");
	for(i=0;fread(&book[i],sizeof(struct book),1,fp)!=0;i++)
	{
			printf("此书的信息为：\n");
			printf("书名:%s\n作者:%s\nISBN:%s\n价格:%f\n",book[i].name,book[i].writer,book[i].ISBN,book[i].price);
	}
    fclose(fp);
	fp=fopen("book.scv","r");

	printf("\n\n");
	printf("#######################################################################\n");
	printf("######                        图书删除                           ######\n");
	printf("######  ———————————————————————————————————————————————————————  ######\n");
    printf("######          请输入待删除图书书名：                           ######\n");
    printf("######  ———————————————————————————————————————————————————————  ######\n");
    printf("#######################################################################\n");
    scanf("%s",&n);
	for(i=0;fread(&book[i],sizeof(struct book),1,fp)!=0;i++)
	{
	    if(strcmp(n,book[i].name)==0)
		{
		     printf("此书的信息为：\n");
		     printf("书名:%s\n作者:%s\nISBN:%s\n价格:%f\n",book[i].name,book[i].writer,book[i].ISBN,book[i].price);
	    }
	}
	fclose(fp);

	int cho;
	printf("删除<1>,取消<0>\n");
	scanf("%d",&cho);
	if(cho==1)
	{
		fp1=fopen("book.scv","w");
		fp2=fopen("book.scv","r");
		for(i=0;fread(&book[i],sizeof(struct book),1,fp2)!=0;i++)
		{
			fwrite(&book[i],sizeof(struct book),1,fp1);
		}
		printf("删除成功\n");
		fclose(fp1);
		fclose(fp2);
		fp1=fopen("book.scv","w");
		fclose(fp1);
	}

	else
	{
		fclose(fp1);
		fclose(fp2);
		fp1=fopen("book.scv","w");
		fclose(fp1);
	}
}



void Revise()
{
	FILE *fp;
	int i,j;
	char n[20];
	int m=0;
	fp=fopen("book.scv","r");
    printf("#######################################################################\n");
	printf("######                        图书删除                           ######\n");
	printf("######  ———————————————————————————————————————————————————————  ######\n");
	printf("######          请输入待修改图书书名：                           ######\n");
	printf("######  ———————————————————————————————————————————————————————  ######\n");
	printf("#######################################################################\n");
    scanf("%s",&n);
	for(i=0;fread(&book[i],sizeof(struct book),1,fp)!=0;i++)
	{
		if(strcmp(n,book[i].name)==0)
		{
			printf("此书的信息为：\n");
		    printf("书名:%s\n作者:%s\nISBN:%s\n价格:%f\n",book[i].name,book[i].writer,book[i].ISBN,book[i].price);
			break;
      	}
		return i
	}

	fclose(fp);

	printf("\n\n");
    fp=fopen("book.csv","w");
    fseek(fp,i*sizeof(struct book),0);
	printf("#######################################################################\n");
	printf("######                        图书删除                           ######\n");
	printf("######  ———————————————————————————————————————————————————————  ######\n");
	printf("######          请输入修改后的图书书名：                         ######\n");
    scanf("%s",&book[i].name);
    printf("######          请输入修改后的图书作者：                         ######\n");
	scanf("%s",&book[i].writer);
    printf("######          请输入修改后的图书ISBN：                         ######\n");
	scanf("%s",&book[i].ISBN);
    printf("######          请输入修改后的图书价格：                         ######\n");
    scanf("%f",&book[i].price);
	printf("######  ———————————————————————————————————————————————————————  ######\n");
	printf("#######################################################################\n");
    fwrite(&book[i],sizeof(struct book),1,fp);
	fclose(fp);
}

