#include<stdio.h>
int LCM(int m,int n);
int main()
{
int m,n,k;
scanf("%d %d",&m,&n);
k=LCM(m,n);
printf("the least common multiple is:%d\n",k);
return 0;
}

int LCM(int m,int n)
{int tem,h,b,d;
b=m;d=n;
if(m<n)
{tem=m;
m=n;
n=tem;}
while(m%n !=0){
n=m%n;
m=tem;}
if(n==1)
h=b *d;
else if(n!=1) h=m;
return h;
}
