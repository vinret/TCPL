#include<stdio.h>
int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    a ^= b;
    b ^= a;
    a ^= b;
  
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}
