#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,i,j;
    char c;
    scanf("%d %c",&n,&c);
    a=sqrt((n+1)/2.0);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=a-i;j++)
            putchar(' ');
        for(j=1;j<=2*i-1;j++)
            putchar(c);
        putchar('\n');
    }
    for(i=2;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
            putchar(' ');
        for(j=1;j<=2*i-1;j++)
            putchar(c);
        putchar('\n');
    }
    printf("%d\n",n-(2*a*a-1));
    return 0;
}
