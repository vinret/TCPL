#include<stdio.h>
#include<stdlib.h>
#include"book.h"
#include"command.h"

int main()
{
	int num;
	struct BOOK *head=(struct BOOK *)malloc(sizeof(struct BOOK));
	Read(head);
	printf("Add the records......................1\nModify the records...................2\nDelete the records...................3\nSearch the records...................4\nExit the system......................5\n");
	while(num!=5)
	{
		printf("please choose the order\n");
		scanf("%d",&num);
		Menu(head,num);
	}
	DeleteList(head);
	return 0;
}

