#include<stdio.h>
int GCD_iterative(int m,int n);
int main()
{
   int m,n;
   printf("please input two numbers:\n");
   scanf("%d%d",&m,&n);
   printf("%d\n",GCD_interative(m,n));
   return 0;
}
int GCD_interative(int m,int n)
{
    int i,max,min;
    (m>n)?(max=m,min=n):(max=n,min=m);
    if (i=max%min==0)
    return n;
    if (i=max%min!=0)
    return GCD_interative(m,n);
}
