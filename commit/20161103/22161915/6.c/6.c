#include<stdio.h>
long fac(int n)

{

long f;

if(n==0)

f=1;

else

f=n*fac(n-1);

return(f);

}

main()

{

int n;

scanf("%d",&n);

printf("%d!=%ld\n",n,fac(n));

}
