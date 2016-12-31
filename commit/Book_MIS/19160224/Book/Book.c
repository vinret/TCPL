#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct books_list
{
	char bookname[20];
	char author[20];
	char ISBN[10];
	float price;
	struct books_list * next;
};

struct books_list * Create_Books_Doc();
void InsertDoc(struct books_list * head);
void Search_Book(struct books_list * head);
void DeleteDoc(struct books_list * head);
void info_change(struct books_list * head);
void save(struct books_list * head);

void InsertDoc(struct books_list * head)
{
	struct books_list *s,*p;
	char flag='Y';
	p=head;
	while(p->next!=NULL)
	{
		  p=p->next;
	}
	 while(flag=='Y'||flag=='y')
	{
		s=(struct books_list *)malloc(sizeof(struct books_list));
		printf("\n 请输入图书名称:");
		fflush(stdin);
		scanf("%s",s->bookname);
		printf("\n 请输入作者:");
		fflush(stdin);
		scanf("%s",s->author);
		printf("\n 请输入编号:");
		fflush(stdin);
		scanf("%s",s->ISBN);
		printf("\n 请输入价格:");
		fflush(stdin);
		scanf("%f",&s->price);
		printf("\n");
		p->next=s;
		p=s;
		s->next=NULL;
	}
	save(head);
	return;
}

void Search_Book(struct books_list *head)
{ 
	struct books_list * p;
	char temp[20];
	p=head;
	if(head==NULL||head->next==NULL)
	{
		printf("图书库为空\n");
	}
	else
	{
		printf("请输入你要查找的书名:");
		fflush(stdin);
		scanf("%s",temp);
		while(p->next!=NULL)
		{
			p=p->next;
			if(strcmp(p->bookname,temp)==0)
			{
				printf("书名:%s\t\n",p->bookname);
				printf("作者:%s\t\n",p->author);
				printf("ISBN:%s\t\n",p->ISBN);
				printf("价格:%2f\t\n",p->price);
			}
			if(p->next==NULL)
			{
				printf("\n查询完毕\n");
			}
		}
	}
}
 
void DeleteDoc(struct books_list * head)
{
	struct books_list *s,*p;
	char temp[20];
	int panduan;
	panduan=0;
	p=s=head;
	printf(" 请输入您要删除的书名:");
	scanf("%s",temp);
	while(p!= NULL)
	{
		if(strcmp(p->bookname,temp)==0)
		{
			panduan++;
			break;
		}
		p=p->next;
	}
	if(panduan==1)
	{
		for(;s->next!=p;)    
		{
			s=s->next;
		}
		s->next=p->next;
		free(p);
		printf("\n删除成功!\n");
	}
	else
	{
		printf(" 您输入的书目不存在，请确认后输入!\n");
	}
	return;
}


void info_change(struct books_list * head)
{
	struct books_list * p;
	int panduan=0;
	char temp[20];
	p=head;
	printf("请输入要修改的书名:");
	scanf("%s",temp);
	while(p->next!= NULL)
	{
		p=p->next;
		if(strcmp(p->bookname,temp)==0)
		{
			printf("\n请输入图书书名:");
			fflush(stdin);
			scanf("%s",p->bookname);
			printf("\n 请输入图书作者名:");
			fflush(stdin);
			scanf("%s",p->author);
			printf("\n请输入ISBN:");
			fflush(stdin);
			scanf("%s",p->ISBN);
			printf("\n 请输入图书价格:");
			fflush(stdin);
			scanf("%s",p->ISBN);
			printf("\n");
			panduan=1;
		}
	}
	if(panduan==0)
	{
		printf("\n 没有图书记录\n");
	}
	return;
}

void save(struct books_list * head)
{
	struct books_list *p;
	FILE *fp;
	p = head;
	fp = fopen("data.txt", "w+");
	fprintf(fp, "┏━━━┳━━━━━┳━━━━━┳━━━━━┳━━━━━━┳━━━┳━━━━┓\n");
	fprintf(fp, "┃书    名 ┃ 作      者┃ IBSN ┃  价格  ┃\n");
	fprintf(fp, "┣━━━╋━━━━━╋━━━━━╋━━━━━╋━━━━━━╋━━━╋━━━━┫\n");
	while (p->next != NULL)
	{
		p = p->next;
		fprintf(fp, "┃%-10.10s┃%-10.10s┃%-6.6s┃%.2f   ┃\n",
		p->bookname, p->author, p->ISBN, p->price);
	}
	fprintf(fp, "┗━━━┻━━━━━┻━━━━━┻━━━━━┻━━━━━━┻━━━┻━━━━┛\n");
	fclose(fp);
	printf("      已将图书数据保存到 data.txt 文件\n");
}

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
