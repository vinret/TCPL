#ifndef Book_H_
#define num 10000
#define Book_h_
#include<stdio.h>

struct book               /* 结构体*/
{
    char name[20];        /* 书名 */
    char writer[20];      /* 作者 */
	char ISBN[20];            /* ISBN */
    float price;          /* 价格 */
}book[num];

void Output();            /* 输出 */ 
void Add();               /* 添加 */
void Search();            /* 查找 */
void Delete();            /* 删除 */
void Revise();            /* 修改 */ 

#endif
