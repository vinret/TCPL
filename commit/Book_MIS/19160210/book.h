#ifndef BOOK_H_
#define BOOK_H_
#define booknum 1000

struct book
{
 char name[30];
 char author[20];
 char isbn[13];
 float price;
};

typedef struct book* Book_node;

typedef struct book Book;
Book list[booknum];


void output(const char* book,Book *plist);
int load(const char* book,Book *plist);
int save(Book *plist,char* book);
Book_node find(Book *plist,char* isbn);
void insert(Book *plist,Book_node book);
void delete(Book *plist,const char* isbn);
#endif

