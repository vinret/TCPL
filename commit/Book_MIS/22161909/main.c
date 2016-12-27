#include <stdio.h>
#include <stdlib.h>
#include "command.h"

int Menu();

int main()
{
	int choice;
/*	struct Book book[10]={{"Beyond_Human_Nature","Jesse_Prinz",101,25.3}, 
		              {"Pieces_of_Light","Charies_Fernyhough",102,26.3}, 
			      {"The_Information","James_Gleick",103,27.3},
		   	      {"The_Righteous_Mind","Jonathan_Haidt",105,28.3}, 
			      {"Inconvenient_People","Sarah_Wise",106,29.3}       };        */
	struct Book book[50];
	struct Book book1;
	struct Book *pbook;
	pbook=book;
	int n=Load(pbook),k,ISBN;
	while(1)
	{
		choice=Menu();
		if(choice==0) break;
		switch(choice)
		{
	          	case 1:Output(book,n);break;
			case 2:{
				       printf("Please input the book's information which you want to add:");
				       scanf("%s %s %d %f",book1.name,book1.author,&book1.ISBN,&book1.price);
				       n=Insert(book,n,book1);
				       Output(book,n);
				       break;
			       }
			case 3:{
				       printf("Please input the book's ISBN which you want to search:");
				       scanf("%d",&ISBN);  k=Search(book,n,ISBN);
				       if(k!=-1)
			           printf("%s,%s,%d,%f\n",book[k].name,book[k].author,book[k].ISBN,book[k].price);
				       else printf("No found.\n");
				       break;
			       }
			case 4:{
				       printf("Please input the book's ISBN which you want to delete:");
				       scanf("%d",&ISBN);  n=Delete(book,n,ISBN);
				       Output(book,n);
				       break;
			       }
			case 5:;break;
			case 6:{
                                       Save(pbook,n);
				       printf("Having been saved successfully!\n");
				       break;
			       }
		}
	}
	return 0;
}

int Menu()
{
	int choice;
	printf("1......Output all book information\n");
	printf("2......Insert book information\n");
	printf("3......Search book information\n");
	printf("4......Delete book information\n");
	printf("5......Revise book information\n");
	printf("6......Save book information\n");
	printf("0......Exit\n");
	scanf("%d",&choice);
	return choice;
}

		
			 
			 

