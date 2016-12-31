#ifndef BOOK_H_
#define BOOK_H_

struct book
{
 char name[50];
 char author[20];
 char ISBN[13];
 float price;
 struct book *next;
};

typedef struct book Book;

int load(Book *head);
int save(Book *head);
Book *search(Book *head,char *qISBN);
int delete(Book *head,char *qISBN);
void insert(Book *head);
void modify(Book *head,char *qISBN);
void output(Book *head);
Book *DeleteList(Book *head);

#endif
