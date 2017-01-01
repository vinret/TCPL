#ifndef BOOK_H
#define BOOK_H

struct BookNode
{
 char name[10];
 char authur[10];
 char isbn[14];
 float price;
 struct BookNode* next;
};

typedef struct BookNode book;

book* load();
book* search(book* head,char isbn[14]);
book* insert(book* head);
void delete(book* head,char isbn[14]);
void output(book* head);
void save(book* head);
void update(book* head,char isbn[14]);
#endif
