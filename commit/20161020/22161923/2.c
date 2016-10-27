#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d=4;
    int Sum;
    float Average;

    Sum = a+b+c+d;
    Average = 1.0*Sum/4;
    printf("%d,%.1f\n", Sum,Average);

    return 0;
}
