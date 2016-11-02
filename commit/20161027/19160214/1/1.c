#include<stdio.h>
int main()
{
int a,b,s;
 for(a=1;a<=9;a++)
{
 for(b=1;b<=a;b++)
{s=a*b;
 printf("%d*%d=%d\t ",a,b,s);
}
printf("\n");
}
return 0;
}
