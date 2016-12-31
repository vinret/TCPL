#include<stdio.h>

#include"command.h"

int menu(void)
{
	char s[20];
	int c;
	system("cls");
	printf("\t\tLibrary information management system\n");
	printf("\t\t1.Book information input \n");
	printf("\t\t2.Book information query\n");
	printf("\t\t3.Book information modify\n");
	printf("\t\t4.Book information deleted\n");
	printf("\t\t5.Save book information\n");
	printf("\t\t6.Load the book information\n");
	printf("\t\t7.EXIT\n");
	printf("\t\tLibrary information management system\n\n\n");
	do{
	gets(s);
	c = atoi(s);
	}while(c<0||c>8);
	return c;
}
