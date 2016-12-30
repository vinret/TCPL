#define MAX 100
#define LINESIZE 100
struct book
{
     char isbn[11];
     char bookName[21];
     double price;
     int idParyPrice;//***
};
typedef struct book Book;
int loadArray(Book aryBook[],Book* paryPrice[],int* pSize,char* fileName);
int saveAs(Book *pBook,int size,char * fileName);
int parse(Book *pBook,char *line,char split);
