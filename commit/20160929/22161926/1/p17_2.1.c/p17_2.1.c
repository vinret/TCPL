#include<stdio.h>
int main()
{
    char c;
    int i;
    float x;
    double z;
    
    printf("char   size=%lu\n",sizeof(c));
    printf("int    size=%lu\n",sizeof(i));
    printf("float  size=%lu\n",sizeof(x));
    printf("double size=%lu\n",sizeof(z));

    return 0;
}

