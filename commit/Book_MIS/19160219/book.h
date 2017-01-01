#ifndef BOOK_H_
#define BOOK_H_

struct BookItem{char name[60];
                char author[20];
                char isbn[14];
                float price;
                struct BookItem* next;};

typedef struct BookItem Books;

Books* load();
void save(Books* head);

Books* search(Books* head,char ISBN[14]);
Books* insert(Books* head);
void delete(Books* head,char ISBN[14]);
void update(Books* head,char ISBN[14]);
void output(Books* head);
#endif
