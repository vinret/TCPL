#include<stdio.h>
int LCM(int m,int n);

int LCM(int m,int n)
{
int x,y,z,k;
x=m;
y=n;
do
{
z=x%y;
x=y;
y=z;
}while(z!=0);
k=m*n/x;
return k;
}

int main()
{
int m,n,i;
scanf("%d%d",&m,&n);
if(m<n)
{
i=m;
m=n;
n=i;
}
printf("%d\n",LCM(m,n));
return 0;
}
