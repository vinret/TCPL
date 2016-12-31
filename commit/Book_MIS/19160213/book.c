#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book{
	char name[60];
	char author[20];
	char ISBN[14];
	float price;
	struct Book * Next;
};

typedef struct Book Book_MIS;

Book_MIS* insert(Book_MIS* head);
Book_MIS * InsertBeforeHead(Book_MIS* head,Book_MIS* newp);
Book_MIS * creat_list();
void output(Book_MIS* head);
void show(Book_MIS* p);
Book_MIS* search(Book_MIS* head,char isbn[14]);
Book_MIS* update(Book_MIS* head,char isbn[14]);
int save(Book_MIS *head);
int Delete(Book_MIS* head,char isbn[14]);
int menu();
int errCmd();

int main(){
   Book_MIS *head,*p;
   int n,i;
   char isbn[14];
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
				printf("Save success:\n");
			else
				printf("Save failed\n");
			break;
		}
		switch(cmd){
case 'i':
		printf("input the information of the new book: \n");
		p=insert(head);
		show(p);
		break;			

case 'o':
		output(head);
		break;
case 's':
		printf("input the ISBN of which you want to search:");
			scanf("%s",isbn);
			p=search(head,isbn);
			if(p==NULL)
				printf("The book does not exist:\n");
			else
				show(p);
			break;
			
case 'd':
		printf("ISBN of which you want to delete: ");
		scanf("%s",isbn);
		i=Delete(head,isbn);
		if(i==0)
		        printf("Delete success:\n");
		else
			printf("This book does not exist, fail to delete:\n");
		break;
case 'u':
		printf("Input the ISBN of which you want to update: ");
		scanf("%s",isbn);
		printf("Update the information: \n");
		p=update(head,isbn);
			show(p);
			break;

			default:errCmd();
		}
		printf("\n\n");
	}while(1);
	return 0;
}

int menu(){
	printf("===BMS MENU===\n");
        printf("(i)Insert the book\n");
        printf("(o)Output the book\n");
	printf("(s)Search the book\n");
	printf("(d)Delete the book\n");
	printf("(u)Update the book\n");
	printf("(q)Save and quit the informantion\n");
	printf("Input your command: ");
	return 0;
}

int errCmd(){
	printf("Error!\n");
	return -1;
}

Book_MIS *creat_list()
{
    int i;
    FILE*fp;
    if((fp=fopen("book.csv","r"))==NULL)
    {
		printf("Fail to open the file!\n");
    	exit(1);
    }
    Book_MIS *head=(Book_MIS *)malloc(sizeof(Book_MIS));     
    Book_MIS *p=head;
	char p1[30],p2[30],p3[30],p4[30];                            
    while(!feof(fp))
   {
    Book_MIS *pnew=(Book_MIS *)malloc(sizeof(Book_MIS));
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


Book_MIS* search(Book_MIS* head,char isbn[30]){
	Book_MIS* p;
	p=head;
	while(p!=NULL){
		if(strcmp(isbn,p->ISBN)==0)
			return p;
		p=p->Next;
	}
	return NULL;
}

Book_MIS* input(int n){
	int i;
	Book_MIS *newp,*head;
	head=NULL;
	for(i=0;i<n;i++){
		newp=(Book_MIS *)malloc(sizeof(Book_MIS));
		scanf("%s%s%s%f",newp->name,newp->author,newp->ISBN,&newp->price);
		head=InsertBeforeHead(head,newp);
	}
	return head;
}

Book_MIS* InsertBeforeHead(Book_MIS* head,Book_MIS* newp){
	newp->Next=head;
	head=newp;
	return head;
}

void output(Book_MIS* head){
	Book_MIS *p;
	p=head;
	while(p!=NULL){
		printf("%s,%s,%s,%f\n",p->name,p->author,p->ISBN,p->price);
		p=p->Next;
	}
}

void show(Book_MIS* p){
	printf("%s,%s,%s,%f\n",p->name,p->author,p->ISBN,p->price);
}



Book_MIS* insert(Book_MIS* head){

	Book_MIS *newp;
	newp=(Book_MIS *)malloc(sizeof(Book_MIS));
	printf("Book_Name: ");
	scanf("%s",newp->name);
	printf("Book_Author: ");
	scanf("%s",newp->author);
	printf("Book_ISBN: ");
	scanf("%s",newp->ISBN);
	printf("Book_Price: ");
	scanf("%f",&newp->price);
	head=InsertBeforeHead(head,newp);
	return head;
} 

int Delete(Book_MIS* head,char isbn[14]){
	Book_MIS* p;
	Book_MIS* q;
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

Book_MIS* update(Book_MIS* head,char isbn[14]){
	Book_MIS* q;
	q=search(head,isbn);
	printf("update the information: ");
	printf("Book_Name: ");
	scanf("%s",q->name);
	printf("Book_Author: ");
	scanf("%s",q->author);
	printf("Book_Price: ");
	scanf("%f",&q->price);
	return q; 
}


int save(Book_MIS *head){
	FILE* fp;
	Book_MIS* p=head;
	fp=fopen("book.csv","w");
	if(fp==NULL)
		return -1;
	for(;p;p=p->Next){
		fprintf(fp,"%s\t%s\t%s\t%f\n",p->name,p->author,p->ISBN,p->price);
	}
	fclose(fp);
	return 0;
}
