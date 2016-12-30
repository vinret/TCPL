#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"book.h"
#include"command.h"
void main()
{
		int xz = 1;
		Book* head;
		head = (Book*)malloc(sizeof(Book)); //分配头节点空间，建立空链表
		if(head==NULL)
				printf("空间分配不成功!!!\n");
		else{
				head->next = NULL; //头节点指针域设置为空
				while(xz!=0){
						meau();
						scanf("%d",&xz);
						switch(xz){
								case 1:input(head);break;
								case 2:output(head);break;
								case 3:search(head);break;
								case 4:del(head);break;
								case 5:modify(head);break;
								case 6:save(head);break;
								case 7:read(head);break;
								case 0:
								       printf("谢谢使用！\n");break;
						}
				}
		}
}
