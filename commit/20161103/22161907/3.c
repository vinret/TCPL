#include<stdio.h>
int main()
{
int i,a,b,c,d,k,x[1000];
scanf("%d%d%d", &a,&b,&d);
c=a+b;
for (i=0;c!=0;i++)
{
x[i]=c%d;
c=c/d;
}
for (k=i-1;k!=(-1);k--)
printf("%d",x[k]);
printf("\n");
return 0;
}
