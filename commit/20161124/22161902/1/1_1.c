#include <stdio.h>
int GCD_recursive(int m,int n)
{int a[100];
int b=1,i;
for(i=0;i<=100;i++)
{
a[i]=m%n;
if(a[i]==0) return n;
else 
{m=n;
 n=a[i];
}}
}

int main()
{
int jg,m,n;
printf("请输入m,n : ");
scanf("%d %d",&m,&n);
jg=GCD_recursive(m,n);
printf("%d\n",jg);
return 0;
}
