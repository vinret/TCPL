#include<stdio.h>
int main()
{
    float a;
    int   b;
    char  e;
    float d;
    printf("please input a,b,e,d:\n");
    scanf("%f %d %c %f",&a,&b,&e,&d);
    printf("%c %d %.2f %.2f\n",e,b,a,d);
    return 0;
}
