#include<stdio.h>
#include<stdlib.h>
#include"book.h"
#include"command.h"

void Menu(struct BOOK *head,int num)
{
	char n[100];
	switch(num)
	{
		case 1:{
		       struct BOOK *p1=(struct BOOK *)malloc(sizeof(struct BOOK));
		       printf("please enter the title of the book: \n");
		       scanf("%*c");
		       scanf("%[^\n]%*c",&p1->name);
		      // fflush(stdin);
		       printf("please enter the author:\n");
		       scanf("%[^\n]%*c",&p1->author);
		      // fflush(stdin);
		       printf("please enter the ISBN:\n");
		       scanf("%[^\n]%*c",&p1->ISBN);
		      // fflush(stdin);
		       printf("please enter the price:\n");
		       scanf("%f",&p1->price);
		       head=Add(head,p1);
		       Save(head);
		       printf("END\n");break;}
		case 2:{
		       printf("please enter the ISBN:\n");
		       scanf("%*c");
		       scanf("%[^\n]%*c",n);
		       struct BOOK *p2=Search(head,n);
		       if(p2!=NULL)
		       {
			       printf("To modify the record,please enter the new title of book:\n");
			       //setbuf(stdin,NULL); no use?
			       scanf("%[^\n]%*c",&p2->name);
			       printf("please enter the new author:\n");
			       //setbuf(stdin,NULL);
			       scanf("%[^\n]%*c",&p2->author);
			       printf("please enter the new ISBN:\n");
			       //setbuf(stdin,NULL);
			       scanf("%[^\n]%*c",&p2->ISBN);
			       printf("please enter the new price:\n");
			       //setbuf(stdin,NULL);
			       scanf("%f",&p2->price);
			       Save(head);
		       }
		       else
			       printf("Not Found\n");
		       printf("END\n");break;}
		case 3:{
		       printf("please enter the ISBN:\n");
		       scanf("%*c");
		       scanf("%[^\n]%*c",n);
		       struct BOOK *p3=Search(head,n);
		       head=Delete(head,p3);
		       Save(head);
		       printf("END\n");break;}
		case 4:{
		       printf("please enter the ISBN:\n");
		       scanf("%*c");
		       scanf("%[^\n]%*c",n);
		       struct BOOK *p4=Search(head,n);
		       if(p4!=NULL)
		       printf("%s,%s,%s,%f\n",p4->name,p4->author,p4->ISBN,p4->price);
		       else
			       printf("Not Found\n");
		       //free(p4);
	printf("END\n");break;}

	}
}

