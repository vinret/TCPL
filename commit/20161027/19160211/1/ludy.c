#include <stdio.h>
int main()
{
   int a=1,b,c;
    for(a=1;a<=9;a++)
     {
     for(b=a;b<=9;b++)
    {c=a*b;
     printf("%2d*%2d=%2d ",a,b,c);};
     printf("\n");
      };
    return 0;
}

