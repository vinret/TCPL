#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,t,re,a=-1,o=-1;
    char c;
    scanf("%d %c",&n,&c);
    while(o<=n)
    {
        re = n-o;
        a+=2;
        o+=2*a;
    }
    a-=2;
    t=(a-1)/2;
    for(i=0;i<a;i++)
    {
        for(j=0;j<t-abs(i-t);j++)
            printf(" ");
        for(j=0;j<abs(i-t)*2+1;j++)
            printf("%c",c);
        printf("\n");
    }
    printf("%d\n",re);
    system("pause");
    return 0;
}
