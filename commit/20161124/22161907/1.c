#include<stdio.h>
int GCD_recursive(int m,int n);
int GCD_recursive(int m,int n)
{
int i,k=0;
if (m<=n)
i==m;
else i==n;
while (k=0)
{
if (m%i==0 && n%i==0)
{   k=1;
return i;}
else i=i-1;
    k=0;

}


int main()
{
   int m,n,k;
   printf("please input two numbers:");
   scanf("%d,%d", &m,&n);
   printf("%d\n", GCD_recursive(m,n));
return 0;
}
