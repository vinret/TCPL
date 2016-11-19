#include <stdio.h>
int is_prime(int n)
{int i=2; 
if(n==2) return 0;
else{while(i<=n)
{int t;
t=n%i;
i++;
if(t==0) break;}
if(i<n) return -1;
else return 0;
}
}
int main()
{
int n,j=0;
for(n=2;j<=1000;n++)
{
if(is_prime(n)==0)
{j++;
if(j>=100&&j<=1000)
{printf("%d",n);
 printf(" ");}}
}
return 0;
}
