#ifndef BOOK_H_
#define BOOK_H_
#define BOOKNUM 1000
#define LINESIZE 1000
struct book
{char name[99];
 char writer[99];
 int ISBN;
 float price;
};
typedef struct book Book;
Book bookary[BOOKNUM];
void Output(Book *bookary,int size);
Book* search(Book *pbookary,int size,int ISBN);
Book* insert(Book *pbookary,int size);
int delete(Book *pbookary,int size,int ISBN);
Book* update(Book *pbookary,int size,int ISBN);
int loadarray(Book *pbookary,char * filename);
int save(Book *pbookary,int size,char * filename);
#endif
