#include <stdio.h>
int jc(int a);
int main()
{
int n,i=1,k,t;
scanf("%d",&n);
while(i<=n)
{for(k=1;k<=2*n-3*i+18;k++)
{printf(" ");}
 for(k=0;k<i;k++)
{t=jc(i-1)/(jc(i-1-k)*jc(k));
printf("%d",t);
printf("     ");}
 printf("\n");
 i++;
}
return 0;
}
int jc(a)
{
if(a==0) return 1;
else return a*jc(a-1);
}
