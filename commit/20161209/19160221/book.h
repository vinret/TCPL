#ifndef BOOK_H
#define BOOK_H

struct Book
{
  char name[10];;
  char author[10];
  char ISBN[10];
  char price[10];
  struct Book* next;
};

typedef struct Book Book;

int load(Book* bkl);


#endif
