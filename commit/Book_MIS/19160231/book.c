#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Book{
char name[100],author[100],ISBN[200];
float price;
};
int n=0;
typedef struct Book book;
book bookarry[]={0};

void menu()
{
printf("**************************************\n"
       " **     My Book Management System    **\n"
       " **************************************\n");
printf("1. Add a book\n"
       "2. Delete books\n"
       "3. Search book\n"
       "4. Quit");
printf("please input the instruction :\n");
       }

void output(book bookarry[],int n)
{int i;
for(i=0;i<n;i++)
printf("%s,%s,%s,%.2f",bookarry[n].name,bookarry[n].author,bookarry[n].ISBN,bookarry[n].price);
}
void loadarry()
{   FILE *fp;
fp=fopen("book.csv","r");
char ch[100],info[4][50];
int i,j=0,m=0;
while(fgets(ch,100,fp)!= NULL)
{for(i=0;i<strlen(ch);i++)
if(ch[i]==' ')
{info[m][n]='\0';
++j;m=0;}
else {
info[m][n]=ch[i];
++m;}
strcpy(bookarry[n].name,info[0]);
strcpy(bookarry[n].author,info[1]);
strcpy(bookarry[n].ISBN,info[2]);
bookarry[n].price=atof(info[3]);
n++;
j=0;m=0;}
fclose(fp);
}

void menu_add(book bookarry[],int n)
{printf("input the nformation of the book:");
scanf("%s%s%s%.2f",bookarry[n].name,bookarry[n].author,bookarry[n].ISBN,&bookarry[n].price);
}

int menu_delete(book bookarry[],int n,char ISBN[])
{int i,b;b=menu_search(bookarry,n,ISBN);
if(b==-1) return n;
for(i=b;i<n;i++)
bookarry[i]=bookarry[i+1];
return n-1;
}

int menu_search(book bookarry[],int n,char ISBN[])
{int i,b;
for(i=0;i<n;i++){
b=strcmp(bookarry[i].ISBN,ISBN);
if(b==0) return i;
}  return -1;
}

void menu_quit(int n,book bookarry[])
{int i;
FILE *fp;
fp=fopen("book.csv","w");
for(i=0;i<n;i++)
{   fprintf(fp,"%s",bookarry[i].name);
    fprintf(fp,"%s",bookarry[i].author);
    fprintf(fp,"%s",bookarry[i].ISBN);
    fprintf(fp,"%.2f",bookarry[i].price);
}   fclose(fp);}

void menu_error()
{
printf("error! \n");}

int main()
{char ISBN;
int choice,k;
loadarry();
menu();
scanf("%d",&choice);
switch(choice) {
case 1: menu_add(bookarry,n);   n=++n;output(bookarry,n);
break;
case 2: menu_delete(bookarry,n,ISBN);
break;
case 3:printf("input the ISBN of the book you want:");fgets(ISBN,200,stdin);    k= menu_search(bookarry,n,ISBN);if(k=-1)  printf("%s,%s,%s,%.2f",bookarry[n].name,bookarry[n].author,bookarry[n].ISBN,bookarry[n].price); else printf("NOT FOUND\n");
break;
case 4: menu_quit(bookarry,n);
break;
default: menu_error();
break;}
return 0;
}

