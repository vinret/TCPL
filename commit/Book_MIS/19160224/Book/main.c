#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"book.h"

int main(void)
{
	struct books_list * head;
	char choice;
	head = NULL;
	for (;;)
	{
		printf("             ┏━┓━━━━━━━━━━━━━━━━━━━┏━┓\n");
		printf("             ┃  ┃          socat   图书管理系统        ┃  ┃\n");
		printf("             ┃  ┗━━━━━━━━━━━━━━━━━━━┛  ┃\n");
		printf("             ┃              ●[1]图书信息添加             ┃\n");
		printf("             ┃                                           ┃\n");
		printf("             ┃               ●[2]图书信息查询             ┃\n");
		printf("             ┃               ●[3]图书信息修改             ┃\n");
		printf("             ┃               ●[4]图书信息删除             ┃\n");
		printf("             ┃               ●[5]退出系统                 ┃\n");
		printf("             ┗━━━━━━━━━━━━━━━━━━━━━━━┛\n");
		printf("          请选择:");
		fflush(stdin);
		scanf("%c", &choice);
		/*if (choice == '1')
		{
			if (head == NULL)
			{
				head = Create_Books_Doc();
			}
			InsertDoc(head);
		}
		else if (choice == '2')
		{
			Print_Book_Doc(head);
		}			
		search_book(head);
	}
	else if (choice == '3')
	{
		info_change(head);
	}
	else if (choice == '4')
	{
		DeleteDoc(head);
	}
	else if (choice == '5')
	{
		printf("\n");
		printf("       ━━━━━━━━  感谢使用图书管理系统  ━━━━━━━━\n");
		break;
	}
	else
	{
		printf("      ━━━━ 输入错误，请重新输入！━━━━");
		break;
	}*/ 
}
return 0;
}
