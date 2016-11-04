#include<stdio.h>
int fac_bit_count(int n);

int main()
{
int m,n;
scanf("%d",&n);
m=fac_bit_count(n);
printf("%d!共%d位\n",n,m);
return 0;
}

int fac_bit_count(int n)
{
long long int jc=1;
int i;
if(n==0)
return 1;
for(i=1;i<=n;i++){
jc*=i;}
for(i=1;jc>=10;i++){
jc=jc/10;}
return i;
}
