#include<stdio.h>
int main()
{
    unsigned int x,n,a,b,c;
    scanf("%u%u",&x,&n);
    a=x<<(32-n);
    b=x>>n;
    c=a|x;
    printf("%u",c);
    return 0;
}
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                           
