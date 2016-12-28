#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BOOKNUM 1000000
#define LINESIZE 1000000
int size;

struct book
{
	char name[100];
	char auther[100];
	char ISBN[30];
	float price;
};

typedef struct book Book;
Book bookAry[BOOKNUM]={0};

int search(int size,char qid[]);
int del(int size,char qid[]);
void insert();
void update();
int loadArry();
int saveAs(int size);
void List(int size);
char *my_gets(char str[],size_t len);
int menu();
int errCmd();

char *my_gets(char str[],size_t len)
{
	int i;
	for(i=0;i<len;i++)
	{
		scanf("%c",&str[i]);
		if(str[i]=='\n') break;
	}
	str[i]='\0';
	return str;
}

int search(int size,char qid[])
{
	int i;
	for(i=0;i<size;i++)
		{
			if(!strcmp(qid,(bookAry[i]).ISBN))
				{
					printf("%s\t%s\t%s\t%.2f\n",bookAry[i].name,bookAry[i].auther,bookAry[i].ISBN,bookAry[i].price);
					printf("\n");
					break;
				}
		}
	return i;
}

int del(int size,char qid[])
{
	int i;
	i=search(size,qid);
	if(i==size)
	{
		return -1;
	}
	else
	{
	for(i;i<(size-1);i++)
	{
		strcpy(bookAry[i].name,bookAry[i+1].name);
		strcpy(bookAry[i].auther,bookAry[i+1].auther);
		strcpy(bookAry[i].ISBN,bookAry[i+1].ISBN);
		bookAry[i].price=bookAry[i+1].price;
	}
	return 0;
	}
}

void insert()
{
	int r;
	char c[50];
	Book tmp;
	printf("ISBN:");
	my_gets(c,50);
	strcpy(bookAry[size].ISBN,c);
	r=search(size,bookAry[size].ISBN);
	if(r!=size)
		{
			printf("This book has been in system!\n");
			printf("\n");
		}
	else
	{
		printf("Name:");
		my_gets(c,50);
		strcpy(bookAry[size].name,c);
		printf("Auther:");
		my_gets(c,50);
		strcpy(bookAry[size].auther,c);
		printf("Price:");
		my_gets(c,50);
		bookAry[size].price=atof(c);
		size++;
	}
}

void update()
{
	int r;
	char c[50];
	Book tmp;
	printf("ISBN:");
	my_gets(c,50);
	r=del(size,c);
	if(r==-1)
	{
		printf("There are no such book!\n");
	}
	else
	{
		strcpy(bookAry[size-1].ISBN,c);
		printf("Name:");
		my_gets(c,50);
		strcpy(bookAry[size-1].name,c);
		printf("Auther:");
		my_gets(c,50);
		strcpy(bookAry[size-1].auther,c);
		printf("Price:");
		my_gets(c,50);
		bookAry[size-1].price=atof(c);
		printf("%s\t%s\t%s\t%.2f\n",bookAry[size-1].name,bookAry[size-1].auther,bookAry[size-1].ISBN,bookAry[size-1].price);
		printf("\n");
	}
}

void List(int size)
{
	int i,j;
	printf("Name\tAuther\tISBN\tPrice\n");
	for(i=0;i<size;i++)
		{
			printf("%s\t",bookAry[i].name);
			printf("%s\t",bookAry[i].auther);
			printf("%s\t",bookAry[i].ISBN);
			printf("%.2f\n",bookAry[i].price);
		}
	printf("\n");
}

int loadArry()
{
	FILE *fp;
	fp=fopen("books.csv","r");
	char line[100];
	char info[4][50];
	int i,j=0,k=0,l=0;
		while(fgets(line,100,fp)!=NULL)
			{
				for(i=0;i<strlen(line);i++)
					if(line[i]==',')
					{
						info[j][k]='\0';
						++j;
						k=0;
					}
					else
					{
						info[j][k]=line[i];
						++k;
					}
				strcpy(bookAry[l].name,info[0]);
				strcpy(bookAry[l].auther,info[1]);
				strcpy(bookAry[l].ISBN,info[2]);
				bookAry[l].price=atof(info[3]);
				l++;
				j=0;
				k=0;
			}
	fclose(fp);
	return l;
}

int saveAs(int size)
{
	int i;
	FILE *fp;
	fp=fopen("books.csv","w");
	for(i=0;i<size;i++)
		{
			fprintf(fp,"%s,",bookAry[i].name);
			fprintf(fp,"%s,",bookAry[i].auther);
			fprintf(fp,"%s,",bookAry[i].ISBN);
			fprintf(fp,"%.2f\n",bookAry[i].price);
		}
	fclose(fp);
	return 0;
}

int menu()
{
	printf("==Welcome your library==\n");
	printf("There are %d books in your library\n",size);
	printf("(S)earch the information of books\n");
	printf("(I)nsert the information of books\n");
	printf("(D)elete the information of books\n");
	printf("(U)pdate the information of books\n");
	printf("(A)ll books\n");
	printf("(Q)uit this interface\n");
	printf("What do you want to do:");
	return 0;
}

int errCmd()
{
	printf("Error Command!\n");
	return -1;
}

int main()
{
   char c[100];
	char cmd;
	int r,i;
	size=loadArry();
	for(i=0;i<size;i++)
	do
	{
		menu();
		cmd=getchar();
		getchar();
		if(cmd=='q')
		{
			saveAs(size);
			return 0;
		}
		switch(cmd)
		{
			case 'i':
				printf("enter the information of the book:\n");
				insert();
				printf("%s %s %s %.2f\n",bookAry[size-1].name,bookAry[size-1].auther,bookAry[size-1].ISBN,bookAry[size-1].price);
				printf("\n");
				break;
			case 's':
				printf("Enter the ISBN of the book:");
				my_gets(c,100);
				r=search(size,c);
				if(r==size)
				{
					printf("Can't find the book!\n");
					printf("\n");
				}
				break;
			case 'd':
				printf("Enter the ISBN of the book which you want to delete:");
				my_gets(c,100);
				r=del(size,c);
				if(r==0)
				{
					size--;
					printf("Successfully!\n");
					printf("\n");
				}
				else
				{
					printf("Can't find this book!\n");
					printf("\n");
				}
				break;
			case 'a':
				printf("All books:\n");
				List(size);
				break;
			case 'u':
				update();
				break;
			default:errCmd();
		}
	}while(1);
	return 0;
}
