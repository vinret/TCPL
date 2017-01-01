#ifndef BOOK_H_
#define BOOK_H_
struct book
{
 char name[60];
 char author[30];
 char ISBN[14];
 float price;
 struct book *next;
 };
typedef struct book Book;

 Book *load(Book *head);
 Book *search(Book *head,char ISBN[14]);
 Book *delete(Book *head,char ISBN[14]);
 Book *insert(Book *head);
 void modify(Book *head,char ISBN[14]);
 void output(Book *head);
 int save(Book *head);
 Book *DeleteList(Book *head);


 #endif
