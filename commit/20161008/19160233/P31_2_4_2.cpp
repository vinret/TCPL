#include<stdio.h>
#include<math.h>

int main()
{
        int x,a,b,c;
        printf("input number x a b c:\n");
        scanf("%d%d%d%d",&x,&a,&b,&c);
        if(x<0)
        x=-x;
        else
        x=x;
        if(sqrt(x)==(4*a)/(b*c))
        printf("sqrt(x)=(4*a)/(b*c)");
        else
        printf("sqrt(x)!=(4*a)/(b*c)");
        return 0;
}

