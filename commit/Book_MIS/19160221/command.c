#include "command.h"
#include "book.h"
#include <stdio.h>
#include <stdlib.h>

void menu()
{
	book* head,*current,*p;
	char isbn[N];
	head=load();
	
	while(1)
	{
		current=(book*)malloc(sizeof(book));
		printf("  ===========图书管理系统菜单===========\n\n");
		printf("         (1) 添加图书记录\n");
		printf("         (2) 查询图书记录\n");
		printf("         (3) 删除图书记录\n");
		printf("         (4) 修改图书记录\n");
		printf("         (5) 显示图书记录\n");
		printf("         (6) 退出系统\n");
		
		int command=0;
		while((command!=1)&&(command!=2)&&(command!=3)&&(command!=4)&&(command!=5)&&(command!=6))
		{
			printf("  请输入命令序号: \n");
			scanf("%d",&command);
		}
		
		switch(command)
		{
			case 1: 
			{   
				printf("  ---------请输入插入图书的信息---------\n");
				printf("  书名: ");
				scanf("%s",current->name);
				printf("  作者: ");
				scanf("%s",current->author);
				printf("  ISBN编号: ");
				scanf("%s",current->ISBN);
				printf("  价格: ");
				scanf("%s",current->price);
				head=insert(head,current);
				printf("  get一本新书~\n");
				printf("  书名: %s\t作者: %s\tISBN: %s\t价格: %s\t\n",current->name,current->author,current->ISBN,current->price);
				printf("  --------------------------------------\n\n");
				break;
			}
			case 2:
			{
				printf("  -------请输入所查图书的ISBN编号-------\n");
				printf("  ISBN编号: ");
				scanf("%s",isbn);
				find(head,isbn);
				printf("  --------------------------------------\n\n");
				break;
			}
			case 3:
			{
				printf("  -----请输入要删除的图书的ISBN编号-----\n");
				printf("  ISBN编号: ");
				scanf("%s",isbn);
				head=delete(head,isbn);
				printf("  --------------------------------------\n\n");
				break;
			}
			case 4:
			{
				printf("  -----请输入要更改的图书的ISBN编号-----\n");
				printf("  ISBN编号: ");
				scanf("%s",isbn);
				if(!find(head,isbn))
				{
					printf("  -------请输入更改后的图书的信息-------\n");
					printf("  书名: ");
					scanf("%s",current->name);
					printf("  作者: ");
					scanf("%s",current->author);
					printf("  ISBN编号: ");
					scanf("%s",current->ISBN);
					printf("  价格: ");
					scanf("%s",current->price);
					head=update(head,isbn,current);
				}
				printf("  --------------------------------------\n\n");
				break;
			}
			case 5:
			{ 
				printf("  --------------图书列表----------------\n");
				output(head);
				printf("  --------------------------------------\n\n");
				break;
			}
			default: 
			{
				head=save(head);
				printf("  ~~~欢迎下次使用~欢迎提建议~谢谢！ QQ：1846972035~~~\n");
				printf("  ===================================================\n");
				return;
			}
		}
	}
}

