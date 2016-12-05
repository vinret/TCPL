#include<stdio.h>
int GCD_iterative(int m,int n);
int main()
{
int k,m,n;
scanf("%d%d",&m,&n);
k=GCD_iterative(m, n);
printf("the highest common factor is:%d\n",k);
return 0;
}

int GCD_iterative(int m,int n)
{
int tem;
if(m<n)
{ tem=m;
m=n;
n=tem;}
if(m%n ==0) return n;
else return GCD_iterative(n, m%n);

}
