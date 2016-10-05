#include<stdio.h>
int main()
{
    int c;
    unsigned int i;
    short int x;
    unsigned short int z;  
    printf("int                   size=%d\n",sizeof(c));
    printf("unsigned int          size=%d\n",sizeof(i));
    printf("short int             size=%d\n",sizeof(x));
    printf("unsigned short int    size=%d\n",sizeof(z));

    return 0;
}
