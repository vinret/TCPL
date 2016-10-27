#include<stdio.h>
int main()
{
    float a,b;
    int   i;
    char  ch;
    printf("Please input a,i,ch,b in order\n");
    scanf("%f %d %c %f",&a,&i,&ch,&b);
    printf("%c %d %.2f %.2f\n",ch,i,a,b);
    
    return 0;
}

