#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"

int main()
{
 char ISBN[14];
 int cmd;
 Book *head=load(head);
 
do
{
  menu();
  scanf("%d",&cmd);
  if(cmd==6)
  {
    int ans;
    ans=save(head);
    if(0==ans)
       puts("Succeed in saving!");
    else
       puts("Failure to save!");
    break;
  }
  switch(cmd)
  {
   case 1:
        puts("Please input the book's ISBN:");
	scanf("%s",ISBN);
	Book *bk1=NULL;
	bk1=search(head,ISBN);
	if(bk1==NULL)
           puts("No found!");
        else
	   printf("%s\t\t\t%s\t\t\t%s\t%.2f\n",bk1->name,bk1->author,bk1->ISBN,bk1->price);
	   break;
   case 2:
	puts("Please input the name,the author,the ISBN and the price of the book:");
	head=insert(head);
	save(head);
	if(save(head)==-1)
	  puts("Fail to open file!");
	break;
   case 3:
        puts("Please input the book's ISBN:");
        scanf("%s",ISBN);
	modify(head,ISBN);
        break;
   case 4:
	if(head==NULL)
	puts("The list is empty!");
	else
	puts("Please input the book's ISBN:");
        scanf("%s",ISBN);
	delete(head,ISBN);
	break;
   case 5:
        output(head);
	break;
   default:
        {
	puts("Error command!");
	return -1;
	}
  }
}while(1);

head=DeleteList(head);
return 0;
}
