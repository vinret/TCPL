#include<stdio.h>
int main()
{
    int a,b,c,d,s,k,x[1000];
    scanf("%d%d%d",&a,&b,&d);

    c=a+b;
    
    for(s=0;c!=0;s++)
    {
       x[s]=c%d;
       c=c/d;
    }
    for(k=s-1;k!=(-1);k--)
    {
       printf("%d",x[k]);
    }

   printf("\n");

  return 0;
}
