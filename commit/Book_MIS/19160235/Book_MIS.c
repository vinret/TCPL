#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<iostream.h>
#include<string.h>
#include <dos.h>
typedef struct book_type
{
	int NO_;//书编号
	char name[50];//名字
	char author[50];//作者
	int num;//本数
	struct book_type *next;
	struct book_type *pre;
}book;
book *book_end,*book_first;//定义链表首与链表尾
/**************************重复操作***************************/
int again()//返回0不重复
{		
	char go_on;
	printf("是否要继续操作?Y(y)/N(n):");
	fflush(stdin);
	scanf("%c",&go_on);
	while(go_on!='y'&&go_on!='Y'&&go_on!='N'&&go_on!='n')//
	{
		printf("输入有误，请重新输入:");
		fflush(stdin);
		scanf("%c",&go_on);
	}
	if(go_on=='N'||go_on=='n')	return 0;
	else return 1;
}
//增加图书//
void add_book()
{
 system("cls");
 printf("\t\t\t\t 增加图书 \t\t\t\t\n");
 int flag;
 book *temp;
do
{
	temp=(book *)malloc(sizeof(book));
	if(temp==NULL)
	{
		cout<<"不能分配空间！清理内存空间后再试。"<<endl;//用printf，scanf好麻烦,见谅
//		exit(0);
 		 break;
	}
	cout<<"请输入书本号:";
	cin>>temp->NO_;//如果你知道验证输入类型正确性，请加QQ365385495不吝赐教，谢谢
	cout<<"请输入书本名字:";
	cin>>temp->name;
	cout<<"请输入作者名字:";
	cin>>temp->author;
	cout<<"请输入书本数量:";
	cin>>temp->num;
	if(book_end==NULL)
	{
		temp->next=temp;
		temp->pre=temp;
		book_first=temp;
		book_end=temp;
	}
	else
	{
		temp->pre=book_end;	
		temp->next=book_first;
		book_end->next=temp;
		book_first->pre=temp;
		book_end=temp;
	}
	flag=again();
}while(flag==1);

//cout<<book_first->pre->pre->NO_<<endl;
 system("Pause");
}
/**************************删除图书***************************/
void del_book()
{
 system("cls");
 printf("\t\t\t\t 增加图书 \t\t\t\t\n");
 int flag,i;
 int node;
 book *temp;
do
{
	temp=book_first;
	cout<<"请输入删除的节点编号:";
	cin>>node;
	if(temp==NULL)
	{
		cout<<"无任何图书消息"<<endl;
 		 break;
//		exit(0);
	}
	else
	{
		while(node<1)
		{
			cout<<"输入错误！重新输入"<<endl;
			cin>>node;
		}
		for(i=1;i<node;i++)
		{
			temp=temp->next;
			if(temp==book_first)
			{
				cout<<"没有该节点"<<endl;
				break;
			}
		}
		temp->pre->next=temp->next;
		temp->next->pre=temp->pre;
		if(node==1)	book_first=temp->next;
		free(temp);
		flag=again();
	}
}while(flag==1);

//cout<<book_first->pre->pre->NO_<<endl;
 system("Pause");
}
/**************************查询图书***************************/
void ind_book()
{
 system("cls");
 printf("\t\t\t\t 查询图书 \t\t\t\t\n");
 book *temp;
 temp=book_first;
 if(temp==NULL)
	cout<<"无任何图书消息"<<endl;
 else
	do
	{
		cout<<"图书编号："<<temp->NO_<<"  "
			<<"图书名字："<<temp->name<<"  "
			<<"图书作者："<<temp->author<<"  "
			<<"图书数量："<<temp->num<<endl;
		temp=temp->next;
	}while(temp!=book_first);
	system("Pause");
}
/**************************借书***************************/
void borrow()
{
 system("cls");
 printf("\t\t\t\t 借书 \t\t\t\t\n");
 int flag,i;
 char book_name[50];
 book *temp;
do
{
	temp=book_first;
	cout<<"请输入希望借阅的书的名称:";
	cin>>book_name;
	if(temp==NULL)
	{
		cout<<"无任何图书消息"<<endl;
//		exit(0);
	}
	else
	{
		while(strcmp(book_name,temp->name)&&temp->next!=book_first)
		temp=temp->next;
		if(strcmp(book_name,temp->name)) cout<<"没有该书"<<endl;
		else
		{
			if(temp->num>0)	temp->num-=1;
			else cout<<"该书没有库存"<<endl;
		}
	}
	flag=again();
}while(flag==1);

//cout<<book_first->pre->pre->NO_<<endl;
 system("Pause");
}
/**************************还书***************************/
void ret()
{
 system("cls");
 printf("\t\t\t\t 借书 \t\t\t\t\n");
 int flag,i;
 char book_name[50];
 book *temp;
do
{
	temp=book_first;
	cout<<"请输入归还的书的名称:";
	cin>>book_name;
	if(temp==NULL)
	{
		cout<<"无任何图书消息"<<endl;
//		exit(0);
	}
	else
	{
		while(strcmp(book_name,temp->name)&&temp->next!=book_first)
		temp=temp->next;
		if(strcmp(book_name,temp->name)) cout<<"没有该书"<<endl;
		else temp->num+=1;
	}
	flag=again();
}while(flag==1);

//cout<<book_first->pre->pre->NO_<<endl;
 system("Pause");}
/**************************主函数***************************/
int main()
{
	int flag;
	int action;
	book_first=book_end=NULL;
	while(1)
	{
		system("cls");
		printf("\t\t/*******It is a library system********/\t\t\t\n");
		printf("\t\t\t1. 增加图书\t\t\t\n");
		printf("\t\t\t2. 删除图书\t\t\t\n");
		printf("\t\t\t3. 查询图书\t\t\t\n");
		printf("\t\t\t4. 借书\t\t\t\t\n");
		printf("\t\t\t5. 还书\t\t\t\t\n");
		printf("\t\t\t0. 退出程序\t\t\t\n");
		printf("请输入你的操作：");
		do
		{
			flag=0;
			fflush(stdin);
			scanf("%d",&action);
			switch(action)
			{
			case 1:add_book();break;
			case 2:del_book();break;
			case 3:ind_book();break;
			case 4:borrow();break;
			case 5:ret();break;
			case 0:exit(0);break;
			default:
				flag=1;
				printf("输入错误，请重新输入：");
			}
		}while(flag);
	}
	
}
