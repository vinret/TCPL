#include<stdio.h>
int main()
{  
    char c;
    int i;
    float x;
    double z;
    unsigned long int a;
    signed short int b;
    unsigned short int d;
   
    printf("char   size=%d\n",sizeof(c));
    printf("int    size=%d\n",sizeof(i));
    printf("float  size=%d\n",sizeof(x));
    printf("double size=%d\n",sizeof(z));
    printf("int    size=%d\n",sizeof(a));
    printf("int    size=%d\n",sizeof(b));
    printf("int    size=%d\n",sizeof(b));
    return 0;
}
