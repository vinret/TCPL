/*************
**************ver 1.0 without using .csv(QAQ)
*************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define n 30
#define m 20
struct bookinfo{
	int ISBN;
	char name[n];
	char writer[m];
	int price;
	struct bookinfo *next;
};
struct bookinfo *create1();
struct bookinfo *menus(struct bookinfo *head);
struct bookinfo *del_book(struct bookinfo *head,int isbn);
struct bookinfo *find_book(struct bookinfo *head,int ISBN);
struct bookinfo * add_book(struct bookinfo *head,struct bookinfo *newp);
void edit_book(struct bookinfo *p,int isbn);
void output_book(struct bookinfo *head);

int main()
{
	 struct bookinfo *head=create1();
	 printf("BEFORE\n");
	 output_book(head);
	 head=menus(head);
	 printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	 printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	 printf("AFTER\n");
	 output_book(head);
	 return 0;
}
/*********************************************zhuhanshu****************************/
void output_book(struct bookinfo *head)
{
	struct bookinfo *p;
	p=head;
	while(p!=NULL)
	{
		printf("%8d%30s%20s%6d\n",p->ISBN,p->name,p->writer,p->price);
		p=p->next;
	}
}/********************************************shuchu********************************/

struct bookinfo *create1()
{	
	struct bookinfo *p1,*p2,*p3;
	p1=(struct bookinfo *)malloc(sizeof(struct bookinfo));
	p2=(struct bookinfo *)malloc(sizeof(struct bookinfo));
	p3=(struct bookinfo *)malloc(sizeof(struct bookinfo));
	p1->next=p2;p2->next=p3;p3->next=NULL;
	p1->ISBN=1001;p1->price=50;strcpy(p1->name,"TCPL");strcpy(p1->writer,"K&R");
	p2->ISBN=1003;p2->price=22;strcpy(p2->name,"Send_You_A_Bullet");strcpy(p2->writer,"Liu_Yu");
	p3->ISBN=1005;p3->price=60;strcpy(p3->name,"Pride&Prejudice");strcpy(p3->writer,"Jane_Austen");
	return p1;
}/***************************************************chuangjian***********************/

struct bookinfo *add_book(struct bookinfo *head,struct bookinfo *newp)
{
	struct bookinfo *prev,*p;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(p->ISBN>newp->ISBN) break;
		prev=p;p=p->next;;
	}                                        //you ISBN cha zhao cha ru dian
	newp->next=p;
	if(p==head)
		head=newp;
	else prev->next=newp;
	return head;
}/***************************************************charu*****************************/

struct bookinfo *menus(struct bookinfo *head)
{
	 printf("*************************************************************************\n");
	 printf("<1>ADD book\n");
	 printf("<2>DEL book\n");
	 printf("<3>FIND book\n");
	 printf("<4>EDIT book\n");
	 printf("<5>QUIT\n");
	 printf("Please input a number to choose what you want to do.\n");
	 printf("*************************************************************************\n");
	 int num,isbn;
	 scanf("%d",&num);
	 switch (num)
	 {
		 case 1:{
			struct bookinfo *newp;
			int money;char author[m],title[n];
			newp=(struct bookinfo *)malloc(sizeof(struct bookinfo));
			printf("Please input the book's ISBN,name,writer,price.(Titles and authors should not be separated by spaces)\n");
			scanf("%d%s%s%d",&isbn,title,author,&money);
			newp->ISBN=isbn;newp->price=money;
			strcpy(newp->writer,author);strcpy(newp->name,title);
			//printf("%d%s%s%d\n",newp->ISBN,newp->name,newp->writer,newp->price);
			head=add_book(head,newp);
			return head;
			}break;
		case 2:{
			       printf("Please input the book's IBSN.\n");
			       scanf("%d",&isbn);
			       struct bookinfo *p=(struct bookinfo *)malloc(sizeof(struct bookinfo));
			       p=find_book(head,isbn);
			       if(p!=NULL) head=del_book(head,isbn);
			       else printf("NOT FOUND!\n");
			       free(p);
			       return head;
		       }break;
		case 3:{
			       printf("Please input the book's IBSN.\n");
			       scanf("%d",&isbn);
			       struct bookinfo *p=(struct bookinfo *)malloc(sizeof(struct bookinfo));
			       p=find_book(head,isbn);
			       if(p!=NULL) printf("%8d%30s%20s%6d\n",p->ISBN,p->name,p->writer,p->price);
			       else printf("NOT FOUND!\n");
			       return head;
		       }break;
		case 4:{
			       printf("Please input the book's ISBN.\n");
			       scanf("%d",&isbn);
			       struct bookinfo *p=(struct bookinfo *)malloc(sizeof(struct bookinfo));
			       p=find_book(head,isbn);
			       if(p!=NULL) edit_book(p,isbn);
			       else printf("NOT FOUND!\n");
			       return head;
		       }break;
		case 5:return head;break;
		default:printf("ERROR Command!\n");return head;break;
	 }
}

void edit_book(struct bookinfo *p,int isbn)
{
	printf("Please input the updated information(ISBN,name,writer,price).\n");
	printf("Titles and authors should not be separated by spaces.\n");
	char author[m],title[n];
	scanf("%d%s%s%d",&p->ISBN,author,title,&p->price);
	strcpy(p->writer,author);strcpy(p->name,title);
	printf("%d %s %s %d\n",p->ISBN,p->writer,p->name,p->price);
}
struct bookinfo *find_book(struct bookinfo *head,int isbn)
{
	struct bookinfo *p=head;
	while(p!=NULL)
	{
		if(p->ISBN==isbn) return p;
		p=p->next;
	}
	return NULL;
}/*****************************************search************************/

struct bookinfo *del_book(struct bookinfo *head,int isbn)
{
	struct bookinfo *prev,*p;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(p->ISBN==isbn) break;
		prev=p;p=p->next;
	}
	if(p==NULL) return head;
	if(p==head) head=head->next;
	else prev->next=p->next;
	return head;
}/************************************************shanchu***************/
