#include<stdio.h>
int main()
{
      unsigned int x,p,n;
      unsigned int a,b;
      printf("The function invert(x,p,n)\n");
      
      
      printf("x=  ");
      scanf("%u",&x);

      
      printf("p=  ");
      scanf("%u",&p);
     

      printf("n=  ");
      scanf("%u",&n);

      a=~(~0<<n)<<(p-1);
      b=x^a;
      printf("\nThe return number is %u\n",b);
      return 0;
}
