#include<stdio.h>
int is_pow2(int n)
{int b;
if((n&(n-1))==0)
b=0;
else b=-1;
return b;
}

int main()
{
int k,n;
scanf("%d",&n);
k=is_pow2(n);
printf("%d\n",k);
return 0;
}
