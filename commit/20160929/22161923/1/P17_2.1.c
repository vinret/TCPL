#include<stdio.h>
int main()
{
    char c;                            //将c定义为char型的变量
    int i;                             //将i定义为int型的变量
    float x;                           //将x定义为float型的变量
    double z;                          //将z定义为double型的变量

    printf("unsigned int  size=%lu\n",sizeof(c));
    printf("int  size=%lu\n",sizeof(i));
    printf("short int  size=%lu\n",sizeof(x));
    printf("unsigned short int  size=%lu\n",sizeof(z));

    return 0;
}
