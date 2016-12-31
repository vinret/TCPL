#ifndef BOOK_H_
#define BOOK_H_
struct Book
{
 char ISBN[14];
 char name[60];
 char author[20];
 float price;
struct Book *next;
};
typedef struct Book Book;
Book*create_list();
Book*search(Book*head,const char*ISBN);
Book*update(Book*head,const char*ISBN);
int insert(Book**head);
int delete(Book*head,const char*ISBN);
int load(Book*head,const char*filename);
int save(Book*head,const char*filename);
#endif
