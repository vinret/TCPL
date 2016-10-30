#ifndef BOOK_H_
#define BOOK_H_

#define M 60
#define N 14
#define S 8
struct Book
{
  char name[M];;
  char author[M];
  char ISBN[N];
  char price[S];
  struct Book* next;
};

typedef struct Book book;

book* load();
book* save(book* head);

int find(book* head,char* isbn);
book* insert(book* head,book* p);
book* delete(book* head,char* isbn);
void output(book* head);
book* update(book* head,char* isbn,book* t);

#endif
