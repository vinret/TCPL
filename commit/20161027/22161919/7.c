#include<stdio.h>
int main()
{
    int a,b,c,e=0,k,t;
    double p;

    scanf("%d%d%d",&a,&b,&c);

    for(t=1,k=1;k<=b;k++)
    t*=a;

    p=t%c;

    while(p>=10)
    {
      p/=10.0,e++;
    }
 
    printf("answer=%g%c%d\n",p,'e',e);

    return 0;
}
