#include<stdio.h>
int main()
{
    int a,b,c,d,Sum;
    float Average;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Sum=a+b+c+d;
    Average=1.0*Sum/4;
    printf("%d,%.1f\n",Sum,Average);
    return 0;
}
