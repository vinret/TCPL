#ifndef BOOK_H
#define BOOK_H
struct book_info{
		char name[30];
		char author[30];
		char ISBN[20];
		float price;
		struct book_info* next;
};
typedef struct book_info Book;
void input(Book* head);
void save(Book* head);
void output(Book* head);
void search(Book* head);
void read(Book* head);
void del(Book* head);
void modify(Book* head);
#endif
