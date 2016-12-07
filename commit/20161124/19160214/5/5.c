#include<stdio.h>
int is_pow2(int n);
int main()
{int n;
scanf("%d",&n);
if(is_pow2(n))
printf("%d is not the power of 2 square\n",n);
else
printf("%d is the power of 2 square\n",n);
return 0;
}
int is_pow2(int n)
{int a,s;
a=n-1;
s=a&n;
if(s!=0)
return -1;
else
return 0;
}

