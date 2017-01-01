c#ifndef BOOK_H_
#define BOOK_H_

struct Book
{
	// TODO
};

typedef struct Book* Book_node;

struct Book_list
{
	// TODO
};

typedef struct Book_list* Book_list;

int load(const char* fileName, Book_list bkl);
int save(Book_list bkl, const char* fileName);

Book_node find(Book_list bkl, const char* isbn);
void insert(Book_list bkl, Book_node book);
void delete(Book_list bkl, const char* isbn);

#endif
