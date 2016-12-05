#include <stdio.h>
int sortnum1(int n)     //从大到小排
{
int i,j,tem,jg=0;
int num[4];
for(i=0;i<4;i++)
{
num[i]=n%10;
n=n/10;
}
for(j=0;j<3;j++)
{for(i=0;i<3-j;i++)
{
if(num[i]<num[i+1])
{tem=num[i];
num[i]=num[i+1];
num[i+1]=tem;
}
}
}
for(i=0;i<4;i++)
{
jg=jg*10+num[i];
}
return jg;
}
int sortnum2(int n)     //从小到大
{
int m,jg=0,ys;
m=sortnum1(n);
while(m!=0)
{
jg=jg*10+m%10;
m=m/10;
}
return jg;
}
int main()
{
int N;
printf("请输入N(0,10000): ");
scanf("%d",&N);
while(N!=6174&&N!=0)
{
printf("%d-%d=%d\n",sortnum1(N),sortnum2(N),sortnum1(N)-sortnum2(N));
N=sortnum1(N)-sortnum2(N);
}
return 0;
}
