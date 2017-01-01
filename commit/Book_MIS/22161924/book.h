#ifndef _BOOK_H
#define _BOOK_H

struct Book    
{
       char name[100];
       char writer[100];
       char ISBN[50];
       float price;
       struct Book *next;
};

typedef struct Book * Book_node;

struct Book_list
{
       struct Book *p1,*p2,*p3;
       p1=(Book_node *)calloc(sizeof(Book_node));
       p2=(Book_node *)calloc(sizeof(Book_node));
       p3=(Book_node *)calloc(sizeof(Book_node));
       strcpy(p1->name,"Robinson Crusoe");strcpy(p1->writer,"Daniel Defoe");p1->ISBN=0001;p1->price=22;
       strcpy(p2->name,"Gone with the wind");strcpy(p2->writer,"Margaret Mitchell");p2->ISBN=0002;p2->price=18;
       strcpy(p3->name,"Pride & Prejudice");strcpy(p3->writer,"ane Austen");p3->ISBN=0003;p3->price=23;
       p1->next=p2;   p2->next=p3;   p3->next=NULL; 
       
       return p1;
};

typedef struct Book_list * Book_list;

int load(const char* fileName, Book_list bkl);
int save(Book_list bkl, const char* fileName);

Book_node search(Book_list bkl, const char* ISBN);
void insert(Book_list bkl, Book_node book);
void delete(Book_list bkl, const char* ISBN);
void modify(Book_list bkl, const char* ISBN);

void Output(struct Book *head);

#endif
