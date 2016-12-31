#ifndef BOOK_H_
#define BOOK_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book
{
       char name[60];
       char author[60];
       int isbn;
       float price;
};


int output(struct Book book[],int n);

int load(struct Book *pbook);
int save(struct Book *pbook,int n);

int search(struct Book book[],int n,int isbn);
int insert(struct Book book[],int n,struct Book book1);
int delete(struct Book book[],int n,int isbn);

#endif

