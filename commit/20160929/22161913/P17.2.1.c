#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    long int a;
    signed long int b;
    unsigned int  e;
    unsigned long int d;
    short int f;
    signed short int g;
    unsigned short int h;

    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("dpuble size=%d\n",sizeof(z));
    printf("int  size=%d\n",sizeof(a));
    printf("int size=%d\n",sizeof(b));
    printf("int size=%d\n",sizeof(e));
    printf("int size=%d\n",sizeof(d));
    printf("int size=%d\n",sizeof(f));
    printf("int size=%d\n",sizeof(g));
    printf("int size=%d\n",sizeof(h));

    return 0;
}
