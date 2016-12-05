#include<stdio.h>
int is_prime(int n);
int main()
{
int n=1,i=0,b;
while (i<=1000)
 {n++;
  b=is_prime(n);
  if (b && i>=100) 
    printf("%d ",n);
  if (b) i++;}
printf("\n");
return 0;
}

int is_prime(int n)
{
 int i;
 if (n==2 || n==3) return -1;
  else 
   for(i=2;i<=n/2;i++)
    if (n%i==0) return 0;
 return -1;}
  



