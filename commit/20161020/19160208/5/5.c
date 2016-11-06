#include<stdio.h>
int main ()
{
    float a;
    int b;
    char c;
    float d;
  
    printf("依次请输入一个浮点数，一个整数，一字符，一个浮点数（中间一空格隔开）:");
    scanf("%f %d %c %f",&a,&b,&c,&d);
    
    printf("%c %d %f %f\n",c,b,a,d);
    return 0;
}
