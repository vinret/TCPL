#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
   char name[50];
   char author[50];
   int ISBN;
   float price;
};
 
void Output(struct Book book[],int n);
int Search(struct Book book[],int n,int ISBN);
int Load(struct Book *pbook);
void Save(struct Book *pbook,int n);
int Delete(struct Book book[],int n,int ISBN);
int Insert(struct Book book[],int n,struct Book book1);

#endif

