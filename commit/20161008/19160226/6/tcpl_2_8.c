#include <stdio.h>

int main()

{
    unsigned x,a,b;
    int n;
    printf("x=");
    scanf("%d",&x);
    printf("n=");
    scanf("%d",&n); 
    a=x>>n;
    b=x<<(16-n);
    x=a|b;
    printf("rightrot(x,n)=%d\n",x);

    return 0;
}
