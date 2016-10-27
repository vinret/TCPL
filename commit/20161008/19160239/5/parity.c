#include<stdio.h>
int main()
{
int n=10;
int flag;
if((n&1)==1)
flag=1;
if((n&1)==0)
flag=0;
printf("%d\n",flag);
return 0;
}

