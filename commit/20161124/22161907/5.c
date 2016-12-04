#include<stdio.h>
int is_pow2(int n);

int is_pow2(int n)
{  int i=0,a[100];
 if (n<1)
   return -1;
 if (n==1)
   return 0;
 else 
  {  for (i=0;n!=0;i++)
   {  a[i]=n%2;
     n=n/2;   }
  }
  if (a[i]==1)
   return -1;
  else return 0;
}



int main()
{
   int n;
   scanf("%d", &n);
   printf("%d\n", is_pow2(n));
   return 0;
}
 
