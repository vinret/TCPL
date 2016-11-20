#include<stdio.h>
int main()
{
int a,b,c[30],sum,d,i=0;
scanf("%d%d%d",&a,&b,&d);
sum=a+b;
if (d<=10&&d>1)
{
while(sum!=0)
{
c[i]=sum%d;
sum=sum/d;
i++;
}
for (i--;i>=0;i--)
printf("%d",c[i]);
}
printf("\n");
return 0;
}

