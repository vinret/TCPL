#include <stdio.h>
int q(int n)
{
int a,i=0;
while(n!=0)
{
a=n%2;
if(a==1) {i++;}
n=n/2;
}
return i;
}

int is_pow2(int n)
{
int a;
a=q(n);
if(a==1) return 0;
else return -1;
}
int main()
{
unsigned int a,n;
scanf("%d",&n);
a=is_pow2(n);
printf("%d\n",a);
return 0;
}
