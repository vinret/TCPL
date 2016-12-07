#include <stdio.h>
#include <math.h>
int is_pow2(int n);
int main()
{
 int n,s;
 scanf("%d",&n);
 s=is_pow2(n);
 printf("%d",s);
 return 0;
}
int is_pow2(int n)
{
    double i,flag=0,s;
    (double)n;
    for(i=0;i<n;i++)
    {
        s=pow(2,i);
        if(s==n)
           flag=1;
    }

    if(flag==1)
        return 0;
    else
        return -1;
}
