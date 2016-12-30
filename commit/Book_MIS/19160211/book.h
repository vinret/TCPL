#ifndef BOOK_H
#define BOOK_H

struct BookNode
{
 char name[10];
 char authur[10];
 int isbn;
 float price;
 struct BookNode* next;
};

typedef struct BookNode book;

book* load();
book* search(book* head,int isbn);
book* insert(book* head);
void delete(book* head,int isbn);
void output(book* head);
void save(book* head);
void update(book* head,int isbn);
#endif
