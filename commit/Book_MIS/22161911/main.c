#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"
#include "command.h"
int main()
{
	int a;
	struct Book book[100];
	struct Book book1;
	struct Book *pbook;
	pbook=book;
	int n=Load(pbook),k,ISBN;
	while(1)
	{
	        a=Menu();
		if(a==0) break;
		switch(a)
		{
	        case 1:Output(book,n);break;
		case 2:{
			n=Add(book,n,book1);
			Output(book,n);
			break;
		       }//添加
		case 3:{  
                        k=Search(book,n,ISBN);
			if(k!=-1)
			printf("%s %s %d %f\n",book[k].name,book[k].author,book[k].ISBN,book[k].price);
			else printf("No found.\n");
			break;
		       }//查找
		case 4:{
                        n=Delete(book,n,ISBN);
			Output(book,n);
			break;
		       }//删除
		case 5:{
			 n=Update(book,n,ISBN);
                         Output(book,n);
			 break;
			}//修改
		case 6:{
                       Save(pbook,n); 
                       printf("Having been saved successfully!\n");
		       break;
		       }//保存
		}
	}
	return 0;
}
