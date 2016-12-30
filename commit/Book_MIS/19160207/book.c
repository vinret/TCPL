#include"book.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//添加
void input(Book* head)
{
		int sfjx = 1;
		Book *q,*p;
		q=head;
		while(q->next != NULL) //使q指向末节点
				q=q->next;
		while(sfjx!=0){
				p=(Book*)malloc(sizeof(Book)); //给新节点分配空间
				if(p==NULL)
						printf("新节点分配不成功，无法进行记录\n");
				else{
						printf("请输入新添书籍的详细信息（书名、作者、ISBN　、价格):\n");
						scanf("%s %s %s %f",p->name,p->author,p->ISBN,&p->price);
						q->next=p;
						q=p;
				}
				printf("是否继续(0-结束　其他-继续\n");
				scanf("%d",&sfjx);
		}
		q->next=NULL;
}
//输出
void output(Book* head)
{
		Book* p;
		p=head->next;
		printf("以下为输出结果:\n");
		while(p!=NULL){
				printf("书名:%s 作者:%s ISBN:%s 价格:%f\n",p->name,p->author,p->ISBN,p->price);
				p=p->next;
		}
}
//按顺序保存至文件
void save(Book* head)
{
		Book* p;
		FILE* fp;
		fp=fopen("library.csv","w");
		if(fp==NULL)
				printf("文件无法打开，数据不能保存!\n");
		else{
				p=head->next;
				while(p!=NULL){
						fprintf(fp,"%s %s %s %f \n",p->name,p->author,p->ISBN,p->price);
						p=p->next;
				}
				fclose(fp);
				printf("以成功保存\n");
		}
}
//查询
void search(Book* head)
{
		char isbn[20];
		int sfjx = 1;
		Book* p=head->next;
		while(sfjx!=0){
				printf("请输入要查找书籍的ISBN: ");
				scanf("%s",isbn);
				while(strcmp(p->ISBN,isbn)!=0)
						p=p->next;
				if(p==NULL)
						printf("查无此书\n");
				else{
						printf("此书的详细信息如下:\n");
						printf("书名:%s 作者:%s ISBN:%s 价格:%f \n",p->name,p->author,p->ISBN,p->price);
				}
				printf("是否继续(0-结束　其他-继续): ");
				scanf("%d",&sfjx);
		}
}
//读盘
void read(Book* head)
{
		FILE* fp;
		char name[30],author[30],isbn[20];
		float price;
		Book *p,*q;
		fp=fopen("library.csv","r");
		if(fp==NULL)
				printf("文件无法打开，数据无法读取!\n");
		else{
				q=head;
				while(q->next!=NULL)
						q=q->next;
				fscanf(fp,"%s %s %s %f",name,author,isbn,&price);
				while(!feof(fp)){
						p=(Book*)malloc(sizeof(Book));
						if(p==NULL)
								printf("空间分配不成功，无法进行记录！\n");
						else{
								strcpy(p->name,name);
								strcpy(p->author,author);
								strcpy(p->ISBN,isbn);
								p->price=price;
								q->next=p;
								q=p;
						}
						fscanf(fp,"%s %s %s %f",name,author,isbn,&price);
				}
				fclose(fp);
				printf("信息已成功读取\n");
		}
		q->next=NULL;
}
//删除
void del(Book* head)
{
		int sfjx = 1;
		Book *p,*q;
		char isbn[20];
		while(sfjx!=0){
				q=head; //q将来用于指向待删节点和前驱节点
				p=head->next; //p将来指向待删节点
				printf("请输入要删书籍的ISBN：");
				scanf("%s",isbn);
				while((p!=NULL)&&(strcmp(isbn,p->ISBN)!=0)){
						q=p;
						p=p->next;
				}
				if(p==NULL)
						printf("查无此书!\n");
				else{
						q->next=p->next;
						free(p);
						printf("已成功删除!\n");
				}
				printf("是否继续（0-结束 其他-继续): ");
				scanf("%d",&sfjx);
		}
}
//修改
void modify(Book* head)
{
		int sfjx = 1;
		Book* p;
		char isbn[20];
		while(sfjx!=0){
				p=head->next;
				printf("请输入要修改书籍的ISBN:");
				scanf("%s",isbn);
				while((p!=NULL)&&(strcmp(isbn,p->ISBN)!=0))
						p = p->next;
				if(p==NULL)
						printf("查无此书\n");
				else{
						printf("此书详细信息如下:\n");
						printf("书名:%s 作者:%s ISBN:%s 价格:%f\n",p->name,p->author,p->ISBN,p->price);
						printf("请输入新内容...\n");
						printf("请输入一本书的详细信息（书名、作者、ISBN、价格)\n");
						scanf("%s %s %s %f",p->name,p->author,p->ISBN,&p->price);
						printf("修改成功！\n");
				}
				printf("是否继续（0-结束 其他-继续): ");
				scanf("%d",&sfjx);
		}
}
