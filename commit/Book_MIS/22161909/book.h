/*.....book.h......*/
#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
   char name[30];
   char author[20];
   int ISBN;
   float price;
};
			
void Output(struct Book book[],int n);
int Search(struct Book book[],int n,int ISBN);
int Load(struct Book *pbook);
int Delete(struct Book book[],int n,int ISBN);
int Insert(struct Book book[],int n,struct Book book1);
void Save(struct Book *pbook,int n);

#endif
