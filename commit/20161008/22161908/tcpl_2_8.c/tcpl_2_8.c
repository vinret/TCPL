#include <stdio.h>
int main()
{
      unsigned int x,n;
      unsigned int a,b,c;
      
      printf("The function rightrot(x,n)\n");
      
      printf("x=  ");
      scanf("%u",&x);

      printf("n=  ");
      scanf("%u",&n);

      b=x<<(32-n);
      c=x>>n;
      a=b|c;
      printf("\nThe return number is %u\n",a);
      return 0;
}
