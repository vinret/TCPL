#ifndef BOOK_H_
#define BOOK_H_

#include<stdio.h>

struct books_list
{
	char bookname[20];
	char author[20];
	char ISBN[10];
	float price;
	struct books_list * next;
};

struct books_list * Create_Books_Doc();
void InsertDoc(struct books_list * head);
void Search_Book(struct books_list * head);
void DeleteDoc(struct books_list * head);
void info_change(struct books_list * head);
void save(struct books_list * head);


#endif // BOOK_H_
