#include<stdio.h>

#include<stdlib.h>

#include<time.h>

#include<string.h>

#include<stdlib.h>

typedef int BOOL;

 

typedef struct bookinfo

{

char name[30];/*书名*/

char author[30];/*作者*/

char ISBN[100];/*ISBN*/

float price;/*单价*/

}BOOKINFO;

void menu()

{

printf("\t\t\t图书管理系统\n");

printf("\t\t\t1:添加图书\n");

printf("\t\t\t2:查询图书\n");

printf("\t\t\t3:删除图书\n");

printf("\t\t\t4:修改图书\n");

printf("\t\t\t5:保存退出\n");

}

 

void add()/*11111111111*/

{

char choice;

FILE *p;

BOOKINFO newbook;

system("cls");

while(1)

{

      printf("input name:");

 gets(newbook.name);

 printf("input author:");

 gets(newbook.author);

 printf("input ISBN:");

 gets(newbook.ISBN);

 printf("input price:");

 scanf("%f",&newbook.price);

 while(getchar()!='\n');

 printf("whether reserve?(Y/N)\n");

 choice=getch();

 while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

 choice=getch();

 if(choice=='Y'||choice=='y')

 {

 p=fopen("c:\\bookinfo.data","ab");

 fwrite(&newbook,sizeof(BOOKINFO),1,p);

 fclose(p);

 printf("\nhave insert to c:\\bookinfo.data!\n");

 }

 else

 {

 printf("\nhave not reserve!\n");

 }

 printf("\nwhether continue?(Y/N)\n");

 choice=getch();

 while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

 choice=getch();

 if(choice=='Y'||choice=='y')

 continue;

 else

 break;

}

}

 

void search()

{

char search[30]="";

int n;

FILE *p;

char choice;

BOOKINFO bookinfo[100];

int booknumber=0;

system("cls");

p=fopen("c:\\bookinfo.data","rb");

while(!feof(p))

{

fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);

booknumber++;

}

booknumber--;

fclose(p);

while(1)

{

printf("input the name you want to search:");

gets(search);

if(booknumber==0)

{

printf("not found!\n\n");

printf("press any key to back!\n\n");

getch();

break;

}

else

{

for(n=0;n<booknumber;n++)

if(strcmp(bookinfo[n].name,search)==0)

{

printf("          the information of book                \n");

printf("name        author   ISBN      price    \n");

printf("%-12s%-8s%-6s%-8.1f\n",bookinfo[n].name,bookinfo[n].author,bookinfo[n].ISBN,bookinfo[n].price);

break;

}

if(n>=booknumber)

printf("not found!\n");

printf("\n\nwhether continue?(Y/N)\n");

choice=getch();

while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

choice=getch();

if(choice=='Y'||choice=='y')

continue;

else

break;

}/*else结束*/

}/*while(1)结束*/

}

 

void Delete()

{

char search[20]="";

int n,i;

FILE *p;

char choice;

BOOKINFO bookinfo[100];

int booknumber;

system("cls");

while(1)

{

printf("input name of the book you want to delete:");

gets(search);

p=fopen("c:\\bookinfo.data","rb");

booknumber=0;

while(!feof(p))

{

fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);

booknumber++;

}

booknumber--;

fclose(p);

if(booknumber==0)

{

printf("not found!\n\n");

printf("press any key to back!\n\n");

getch();

break;

}/*if结束*/

else

{

for(n=0;n<booknumber;n++)

if(strcmp(bookinfo[n].name,search)==0)

{

break;

}

if(n>=booknumber)

printf("not found!\n");

else

{

printf("sure to delete?(Y/N)");

choice=getch();

while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

choice=getch();

if(choice=='Y'||choice=='y')

{

for(i=n;i<booknumber-1;i++)

bookinfo[i]=bookinfo[i+1];

booknumber--;

p=fopen("c:\\bookinfo.data","wb");

for(n=0;n<booknumber;n++)

fwrite(&bookinfo[n],sizeof(BOOKINFO),1,p);fclose(p);

printf("success to delete!\n");

}

else

printf("\n\nnot delete!");

}

printf("\n\nwhether continue to delete?(Y/N)\n");

choice=getch();

while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

choice=getch();

if(choice=='Y'||choice=='y')

continue;

else

break;

}/*else结束*/

}/*while(1)结束*/

}

 

void update()

{

char search[20]="";

int n,i;

FILE *p;

BOOKINFO newbook;

char choice;

BOOKINFO bookinfo[100];

int booknumber;

system("cls");

while(1)

{

printf("input the name you want to change:");

gets(search);

p=fopen("c:\\bookinfo.data","rb");

booknumber=0;

while(!feof(p))

{

fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);

booknumber++;

}

booknumber--;	

         fclose(p);

if(booknumber==0)

{

printf("not found!\n\n");

printf("press any to back!\n\n");

getch();

break;

}

else

{

for(n=0;n<booknumber;n++)

if(strcmp(bookinfo[n].name,search)==0)

{

break;

}

if(n>=booknumber)

printf("not found!\n");

else

{

printf("input new name:");

gets(newbook.name);

printf("input new author:");

gets(newbook.author);

printf("input new ISBN:");

gets(newbook.ISBN);

printf("input new price:");

scanf("%f",&newbook.price);

while(getchar()!='\n');

printf("whether reserve?(Y/N)\n");

choice=getch();

while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

choice=getch();

if(choice=='Y'||choice=='y')

{

p=fopen("c:\\bookinfo.data","ab");

fwrite(&newbook,sizeof(BOOKINFO),1,p);

fclose(p);

printf("\nhave reservec:\\bookinfo.data文件中!\n");

}

printf("\n\nwhether continue to change?(Y/N)\n");

choice=getch();

while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')

choice=getch();

if(choice=='Y'||choice=='y')

continue;

else

break;

}

}

}

}

 

void main()

{

char choice;

clock_t tm;

FILE *p;

if((p=fopen("c:\\bookinfo.data","rb"))==NULL)

{

p=fopen("c:\\bookinfo.data","wb");

fclose(p);

}

while(1)

{

system("cls");

menu();

choice=getch();

switch(choice)

{

case '1':add();break;

case '2':search();break;

case '3':Delete();break;

case '4':update();break;

case '5':printf("\npress any key to leave!\n");getch();return;

default:

printf("\n\ninput name!(1~5)");

tm=clock();

while(clock()<tm+1800);

break;

}

}

}
