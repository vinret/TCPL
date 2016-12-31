#ifndef BOOK_H_
#define BOOK_H_
#include <stdio.h>
#include <stdlib.h>
typedef struct book
{
char name[10];
char writer[10];
int ISBN;
float price;
struct book * next;
}mybook;
mybook * creatload();
mybook * search(mybook * head,const int ISBN);
mybook * del(mybook * head,const int ISBN);
mybook * add(mybook * head,const int ISBN);
mybook * update(mybook * head,const int ISBN);
void allput(mybook * head);
void oneput(mybook * pbook);
int save(mybook * head);
mybook *deletelist(mybook * head);
#endif
