#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,e=0;
    double p;

    scanf("%d%d%d",&a,&b,&c);

    p=(a^b)%c;

    while(p>=10)
    {
      p/=10.0,e++;
    }
 
    printf("answer=%g%c%d\n",p,'e',e);

    return 0;
}
