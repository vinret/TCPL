#include <stdio.h>
int main ()
{   
    int a,b,c,d,Sum;
    double Average;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Sum=a+b+c+d;
    Average=(a+b+c+d)/4.0;
    printf("Sum=%d",Sum);
    printf("Average=%.*f",1,Average);
    return 0;
}
