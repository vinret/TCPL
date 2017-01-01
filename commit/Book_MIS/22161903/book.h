#ifndef BOOK_H
#define BOOK_H
struct book
{
        char name[30];            //书名
        char author[21];          //作者
        char ISBN[5];             //编号
        float prize;              //价格
};
typedef struct book Book;
Book* search(Book *pStudAry,int size,char* qISBN);//查询模块   pStudAry：结构体数组，size：数组的有效元素数量，ISBN：待查编号
Book* insert(Book *pStudAry,int size);//插入
Book* update(Book *pStudAry,int size,char * qISBN);//修改
int delete(Book *pStudAry,int *pSize,char *qISBN);//删除
int errorCmd();
int saveAs(Book *pStudAry,int size);//保存文件	

#endif
