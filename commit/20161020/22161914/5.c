#include<stdio.h>
int main();
{
    char c;
    int d;
    double f1,f2;
    scanf("%f%d%c%lf",&f1,&d,&c,&f2);
    printf("%c%d%.2f%.2f\n",c,d,f1,f2);
    return 0;
}
