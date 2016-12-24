#ifndef BOOK_H_
#define BOOK_H_

typedef struct book{
    char   name[60];
    char   author[30];
    char   ISBN[14];
    double price;
    struct book*next;
    }Book;

Book*creat_list();
Book*search(Book*head,const char*ISBN);
Book*delete(Book*head,const char*ISBN);
void Book_insert(Book**head);
void Book_modify(Book*head,const char*ISBN);
void Book_output(Book*head);

int load(Book*head,const char*filename);
int save(Book*head,const char*filename);

Book*DeleteList(Book*head);

#endif
