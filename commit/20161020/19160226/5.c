#include<stdio.h>
int main()
{
    float x,y;
    int m;
    char n;
    printf("Please input:");
    scanf("%f %d %c %f",&x,&m,&n,&y);
    printf("%c %d %.2f %.2f",n,m,x,y);
    return 0;
} 
