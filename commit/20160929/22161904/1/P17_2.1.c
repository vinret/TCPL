#include <stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    long int l;
    signed long int s;
    unsigned int u;
    unsigned long int n;
    short int h;
    signed short int g;
    unsigned short int o;

    printf("char size=%d\n",sizeof(c));
    printf("int size=%d\n",sizeof(i));
    printf("float size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("long int size=%d\n",sizeof(l));
    printf("signed long int size=%d\n",sizeof(s));
    printf("unsigned int size=%d\n",sizeof(u));
    printf("unsigned long int size=%d\n",sizeof(n));
    printf("short int size=%d\n",sizeof(h));
    printf("signed short int size=%d\n",sizeof(g));
    printf("unsigned short int size=%d\n",sizeof(o));

    return 0;
}
