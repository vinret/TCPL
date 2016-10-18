#include<stdio.h>
int main()
{
    unsigned short int x,y,z;
    short int n;
    printf("x=");
    scanf("%hu",&x);
    printf("n=");
    scanf("%hu",&n);
    y=x<<(16-n);
    z=z|y;
    printf("%hu\n",z);
    return 0;
}
