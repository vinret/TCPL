#ifndef BOOK_H_
#define BOOK_H_

#include<stdio.h>

#define m 100
#define len 100
typedef struct data{
	char name[len],auther[len],isbn[len];
	double price;
}data;
typedef struct book{
	int s;
	data a[2*m+5];
	struct book *next;
}book;
//book *root=0;
data f[m*m],a[m*m];
int tot,num[4];
char file[100];
FILE *fp;

void menu();
void openfile(int t);
void print(data x);
data find(int pos);
void record();
void insert(data x,int pos);
void del(int pos);
void change(data t,int pos);
void destroy(book *k);
int compare(data a,data b,int order);
void merge(int l,int r,int order);
void sort(int l,int r,int order);
void itoa(int i,char*string);

#endif // BOOK_H_
