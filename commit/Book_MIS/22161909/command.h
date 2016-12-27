#ifndef _COMMAND_H
#define _COMMAND_H

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
