#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,m,n;
    scanf("%d %d %d",&a,&b,&c);

    n=pow(a,b);
    m=n%c;

    printf("%d\n",m);
    return 0;
}
