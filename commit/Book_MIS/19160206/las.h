int MAX=100;
int LINSIZE=100;
int loadArray(Book aryBook[],Book* paryPrice[],int* pSize,char* fileName);
int saveAs(Book *pBook, int size, char * fileName);
int parse(Book *pBook, char *line, char split);
