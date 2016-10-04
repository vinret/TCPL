#include <stdio.h>
int main()
{
char c;                       //字符型
float x;                      //单精度实型
double z;                     //双精度
signed long int a;            //有符号的长整型
unsigned long int b;          //无符号的长整型
signed short int e;           //有符号的短整型
unsigned short int d;         //无符号的短整型

printf("char                 size=%d\n",sizeof(c));
printf("float                size=%d\n",sizeof(x));
printf("double               size=%d\n",sizeof(z));
printf("signed long int      size=%d\n",sizeof(a));
printf("unsigned long int    size=%d\n",sizeof(b));
printf("signed short int     size=%d\n",sizeof(e));
printf("unsigned short int   size=%d\n",sizeof(d));
      
return 0;
} 
