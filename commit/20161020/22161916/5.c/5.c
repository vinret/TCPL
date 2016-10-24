#include<stdio.h>
int main()
{
    double a;
    int b;
    char c;
    double d;

    scanf("%lf",&a);
    scanf("%d",&b);
    c=getchar();
    scanf("%lf",&d);
    printf("%.2f\b",a);
    printf("%d\b",b);
    putchar(c);
    printf("%.2f\n",d);
    return 0;
}
