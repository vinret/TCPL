#ifndef BOOK_H_
#define BOOK_H_
struct Book
{
    char name[20];
    char writer[20];
    char ISBN[20];
    float price;
};
typedef struct Book* Book_node;
struct Book_list
{
    char name[20];
    char writer[20];
    char ISBN[20];
    float price;
    struct Book_list *next;
};
typedef struct Book_list* Book_list;
Book_list create();
int load(Book_list head,const char* fileName);
int save(Book_list head,const char* fileName);
Book_list deletelist(Book_list head);
void insert(Book_list head,Book_list newp);
Book_node find(Book_list head,const char* ISBN);
void delete(Book_list head,const char* ISBN);
void modify(Book_list head,const char* ISBN);
void output(Book_list head);
#endif
