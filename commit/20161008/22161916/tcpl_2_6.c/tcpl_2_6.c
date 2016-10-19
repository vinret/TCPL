#include<stdio.h>
int main()
{
    unsigned long int x,y,z;
    int p,n;
    printf("x=");
    scanf("%lu",&x);
    printf("y=");
    scanf("%lu",&y);
    printf("p=");
    scanf("%d",&p);
    printf("n=");
    scanf("%d",&n);
    z=x>>(8-p);
    z=z^8;
    y=y>>n;
    y=y<<n;
    z=y|z;
    printf("%lu\n",x);
    printf("%lu\n",z);
    return 0;
}
