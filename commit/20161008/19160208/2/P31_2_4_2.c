#include<stdio.h>
#include<math.h>
int main ()
{
    int x;
    int a=6;
    int b=8;
    int c=3;
     
    printf("请输入x的值： ");
    scanf("%d",& x);

    int d=fabs(x);
    int e=sqrt(d);
    int f=b*c;
    int g=4*a;
    int h=g/f;
    
    if(e!=h)
          printf("所输入x符合要求\n") ;
          printf("%d\n", x);
    if(e=h)
          printf("所输入的x不符合要求\n");
    return 0;
}
