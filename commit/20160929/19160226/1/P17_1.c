#include<stdio.h>
int main()
{
    int c;
    long int i;
    signed long int x;
    unsigned int z;
    unsigned long int c1;
    short int i1
    signed short int x1;
    unsigned short int z1;

    printf("int                 size=%d\n",sizeof(c));
    printf("long int            size=%d\n",sizeof(i));
    printf("signed long int     size=%d\n",sizeof(x));
    printf("unsigned int        size=%d\n",sizeof(z));
    printf("unsigned long int   size=%d\n",sizeof(c1));
    printf("short int           size=%d\n",sizeof(i1));
    printf("signed short        size=%d\n",sizeof(x1));
    printf("unsigned short int  size=%d\n",sizeof(z1));

    return 0;
} 
