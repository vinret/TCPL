int queryByKeyword(Book aryBook[],int* pSize,char keyword[]);
int queryByPrice(Book aryBook[],int* pSize,double max);
int update(Book aryBook[],int *pSize,char qISBN[]);
int delete(Book aryBook[],Book* paryPrice[],int *pSize,char qISBN[]);
int insert(Book aryBook[],Book* paryPrice[],int *pSize,Book b);
