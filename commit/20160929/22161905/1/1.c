#include<stdio.h>
int main()
{
    int i;
    long int l;
    signed long int m;
    unsigned int n;
    unsigned long int o;
    short int p;
    signed short int q;
    unsigned short int r;

    printf("int  size=%d\n",sizeof(i));
    printf("long int  size=%d\n",sizeof(l));
    printf("signed long int  size=%d\n",sizeof(m));
    printf("unsigned int  size=%d\n",sizeof(n));
    printf("unsigned long int  size=%d\n",sizeof(o));
    printf("short int  size=%d\n",sizeof(p));
    printf("signed short int  size=%d\n",sizeof(q));
    printf("unsigned short int  size=%d\n",sizeof(r));

    return 0;
}
