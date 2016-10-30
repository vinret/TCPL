#ifndef BOOK_H
#define BOOK_H

struct book{
            char name[20];
            char auther[20];
            int  ISBN[20];
            float price;
            struct book* next;};
 typedef struct book book_list;
 book_list* load();
 void save(book_list* head);

 book_list* search(book_list* head,int ISBN[20]);
 book_list* insert(book_list* head);
 void delete(book_list* head,int ISBN[20]);
 void update(book_list* head,int ISBN[20]);
 void output(book_list* head);
#endif
