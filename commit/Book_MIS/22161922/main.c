#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"

int main()
{
    char cmd,num[14];
    char F_NAME[]="books.csv";
    int  cnt;
    Book*head=creat_list();
    Book*bkl=NULL;

    char filename[]="books.csv";
    menu();


	    do{
	       
	        cmd=getchar();
	        while(getchar()!='\n')                          //清空输入行
		    continue;
	        if( cmd == 'q')
	 	{
	   	    cnt=save(head,F_NAME);                      //退出系统时，将数据写入磁盘文件，覆盖已有文件内容
	            if(0==cnt)
			printf("已保存!\n");
		    else
			printf("保存失败!\n");
		    break;
		}
	        switch(cmd)
		{
		    case 's':
			printf("请输入ISBN:\n");
	  		scanf("%s",num);
			bkl=search(head,num);
			if(bkl == NULL)
			{
			    printf("该书不存在。\n");
	                }else{
	                    printf("%s\t%s\t%s\t%f\n",bkl->name,bkl->author,bkl->ISBN,bkl->price);
	                }
			break;
		    case 'i':
			Book_insert(&head);
			Book_output(head);
	                break;
		    case 'm':
	                printf("Please input the ISBN of the book:\n");
			scanf("%s",num);
			Book_modify(head,num);
	                Book_output(head);
			break;
		    case 'd':
			printf("请输入ISBN:\n");
			scanf("%s",num);
			bkl=delete(head,num);
	                if(bkl == NULL)
	                {
			    printf("无法删除!\n");
	                }else{
	                    Book_output(bkl);
		        }
	                break;
	           default:
			printf("命令错误!\n");
	       }
	    }while(1);
	    DeleteList(head);                            //删除head指向的链表，释放内存空间
return 0;
}
