#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book{
	char name[60];
	char author[30];
	char ISBN[30];
	float price;
	struct Book * Next;
};

typedef struct Book Book_MI;

Book_MI* InsertBeforeHead(Book_MI* head,Book_MI* newp);
Book_MI* creat_list();
void output(Book_MI* head);
void show(Book_MI* p);
Book_MI* search(Book_MI* head,char isbn[30]);
Book_MI* insert(Book_MI* head);
Book_MI* update(Book_MI* head,char isbn[30]);
int save(Book_MI *head);
int Delete(Book_MI* head,char isbn[30]);
int menu();
int errCmd();

int main(){
	Book_MI *head,*p;
	int n,i;
	char isbn[30];
	char cmd;
	head=creat_list();
	do{
		menu();
		cmd=getchar();
		while(getchar()!='\n')
			continue;
		if(cmd=='q'){
			n=save(head);
			if(n==0)
				printf("Save successfully£¡\n");
			else
				printf("Fail to save£¡\n");
			break;
		}
		switch(cmd){
			case 's':
				printf("input the ISBN of which you want to search£º");
				scanf("%s",isbn);
				p=search(head,isbn);
				if(p==NULL)
					printf("The book does not exist£¡\n");
				else
					show(p);
				break;
			case 'i':
				printf("input the information of new book: \n");
				p=insert(head);
				show(p);
				break;
			case 'd':
				printf("ISBN of which you want to delete: ");
				scanf("%s",isbn);
				i=Delete(head,isbn);
				if(i==0)
					printf("Delete the book successfully£¡\n");
				else
					printf("This book does not exist, fail to delete£¡£¡\n");
				break;
			case 'u':
				printf("Input the ISBN of which you want to update: ");
				scanf("%s",isbn);
				printf("Update the information: \n");
				p=update(head,isbn);
				show(p);
				break;
			case 'o':
				output(head);
				break;
			default:errCmd();
		}
		printf("\n\n");
	}while(1);
	return 0;
}

Book_MI *creat_list()
{
    int i;
    FILE*fp;
    if((fp=fopen("book_info.csv","r"))==NULL)
    {
		printf("Fail to open the file!\n");
    	exit(1);
    }
    Book_MI *head=(Book_MI *)malloc(sizeof(Book_MI));     
    Book_MI *p=head;
	char p1[30],p2[30],p3[30],p4[30];                            
    while(!feof(fp))
   {
    Book_MI *pnew=(Book_MI *)malloc(sizeof(Book_MI));
    fscanf(fp,"%s%s%s%f",pnew->name,pnew->author,pnew->ISBN,&pnew->price);
    if(feof(fp))                           
    {
 	    p->Next=NULL;
        head=head->Next;               
        return head;
    }
 	p->Next=pnew;
 	p=pnew;
    p->Next=NULL;
 	}
 	fclose(fp);
    return head;
}


Book_MI* input(int n){
	int i;
	Book_MI *newp,*head;
	head=NULL;
	for(i=0;i<n;i++){
		newp=(Book_MI *)malloc(sizeof(Book_MI));
		scanf("%s%s%s%f",newp->name,newp->author,newp->ISBN,&newp->price);
		head=InsertBeforeHead(head,newp);
	}
	return head;
}

Book_MI* InsertBeforeHead(Book_MI* head,Book_MI* newp){
	newp->Next=head;
	head=newp;
	return head;
}

void output(Book_MI* head){
	Book_MI *p;
	p=head;
	while(p!=NULL){
		printf("%s,%s,%s,%f\n",p->name,p->author,p->ISBN,p->price);
		p=p->Next;
	}
}

void show(Book_MI* p){
	printf("%s,%s,%s,%f\n",p->name,p->author,p->ISBN,p->price);
}

Book_MI* search(Book_MI* head,char isbn[30]){
	Book_MI* p;
	p=head;
	while(p!=NULL){
		if(strcmp(isbn,p->ISBN)==0)
			return p;
		p=p->Next;
	}
	return NULL;
}

Book_MI* insert(Book_MI* head){

	Book_MI *newp;
	newp=(Book_MI *)malloc(sizeof(Book_MI));
	printf("BookName: ");
	scanf("%s",newp->name);
	printf("Author: ");
	scanf("%s",newp->author);
	printf("ISBN: ");
	scanf("%s",newp->ISBN);
	printf("Price: ");
	scanf("%f",&newp->price);
//	scanf("%s%s%s%f",newp->name,newp->author,newp->ISBN,&newp->price);
	head=InsertBeforeHead(head,newp);
	return head;
} 

int Delete(Book_MI* head,char isbn[30]){
	Book_MI* p;
	Book_MI* q;
	p=search(head,isbn);
	if(p==NULL)
		return -1;
	if(p==head){
		head=head->Next;
		free(p);
		return 0;
	}
	q=head;
	while(q!=NULL){
		if(q->Next==p){
			q->Next=p->Next;
			free(p);
		}
		q=q->Next; 	
	}
	return 0;
}

Book_MI* update(Book_MI* head,char isbn[30]){
	Book_MI* q;
	q=search(head,isbn);
	printf("update the information: ");
	printf("BookName: ");
	scanf("%s",q->name);
	printf("Author: ");
	scanf("%s",q->author);
	printf("Price: ");
	scanf("%f",&q->price);
	return q; 
}

int menu(){
	printf("=== Library management system  ===\n");
	printf("(s)Search the information\n");
	printf("(i)Insert the information\n");
	printf("(d)Delete the information\n");
	printf("(u)Update the information\n");
	printf("(o)Output the information\n");
	printf("(q)Save and quit the system\n");
	printf("Input the command: ");
	return 0;
}

int errCmd(){
	printf("Error Command!\n");
	return -1;
}

int save(Book_MI *head){
	FILE* fp;
	Book_MI* p=head;
	fp=fopen("book_info.csv","w");
	if(fp==NULL)
		return -1;
	for(;p;p=p->Next){
		fprintf(fp,"%s\t%s\t%s\t%f\n",p->name,p->author,p->ISBN,p->price);
	}
	fclose(fp);
	return 0;
}
