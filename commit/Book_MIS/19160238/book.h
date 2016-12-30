#ifndef Book_h_
#define BOOKNUM 1000
struct book
{
   char name[1000];
   char author[1000];
   int ISBN;
   double price;
};
int size;

typedef struct book Book;
Book bookAry[BOOKNUM];

int menu();
int errCmd();
Book* insert(Book *pBookAry,int *pSize);
Book* search(Book *pBookAry,int size,char * bname);
int delete(Book *pBookAry,int *pSize,char * bname);
Book* update(Book *pBookAry,int size,char * bname);
int save(Book *pBookAry,int size);
char *my_gets(char str[],size_t len);
int loadArray(Book *pBookAry);


#endif
