/*.....book.h....*/
#ifndef BOOK_H_
#define BOOK_H_
struct Book
{
    char name[10];
    char writer[10];
    int ISBN;
    float price;
};
int load(struct Book *pbk);
void save(struct Book *pbk,int n);
int find(struct Book book[],int n,int ISBN);
int insert(struct Book book[],int n,struct Book bk1);
int delete(struct Book book[],int n,int ISBN);
void output(struct Book book[],int n);
#endif
