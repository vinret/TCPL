#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"command.h"
#include"book.h"
void menu()
{
    char cmd,num[14];
    char F_NAME[]="book_info.csv";
    int  cnt;
    Book*head=creat_list();
    Book*bkl=NULL;

    do{
	printf("*** Books Information Management Systerm ***\n");
        printf("(s) search books' record\n");
        printf("(i) insert books' record\n");
        printf("(m) modify books' record\n");
        printf("(d) delete books' record\n");
        printf("(o) output books' record\n");
        printf("(q) quit systerm\n");
        printf("Please input your command:\n");
       
        cmd=getchar();
        while(getchar()!='\n')                          //清空输入行
	    continue;
        if( cmd == 'q')
 	{
   	    cnt=save(head,F_NAME);                      //退出系统时，将数据写入磁盘文件，覆盖已有文件内容
            if(0==cnt)
		printf("Succeed in saving records!\n");
	    else
		printf("Failure to save records!\n");
	    break;
	}
        switch(cmd)
	{
	    case 's':
		printf("Please input the book's ISBN:\n");
  		scanf("%s",num);
		bkl=search(head,num);
		if(bkl == NULL)
		{
		    printf("The book isn't exist.\n");
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
		printf("Please input the book's ISBN:\n");
		scanf("%s",num);
		bkl=delete(head,num);
                if(bkl == NULL)
                {
		    printf("Can't delete!\n");
                }else{
                    Book_output(bkl);
	        }
                break;
           case 'o':
                Book_output(head);
                break;
           default:
		printf("Error Command!\n");
       }
    }while(1);
    DeleteList(head);                                   //删除head指向的链表，释放内存空间
}
 







	













