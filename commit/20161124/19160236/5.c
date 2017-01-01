#include<stdio.h>
int is_pow2(int n)
{
if(n&(n-1)) return -1;
else return 0;
}

int main()
{
int n,i;
scanf("%d",&n);
i=is_pow2(n);
if(i==0) printf("this is 2 to the power\n");
else printf("this is not 2 to the power\n");
return 0;
}
