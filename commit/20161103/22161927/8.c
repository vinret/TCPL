#include <stdio.h>
 int fac_bit_count(int n)
 {
 int jc,t,i=0,b=0;
 jc=n;
 while(n>1)
 {n--;
 jc=jc*n;
 }
 while(jc!=0)
 {b=b*10+jc%10;
 jc=jc/10;
 i++;}
 return i;
 }
 int main()
 {
 int n;
 scanf("%d",&n);
 n=fac_bit_count(n);
 printf("%d\n",n);
 return 0;
 }
