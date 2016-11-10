#include<stdio.h>
int quick_pow_mod(int a,int b,int c);

int quick_pow_mod(int a,int b,int c)
{
a%=c;
int res=1,tmp=a;
for(;b;b>=1)
{
if(b&1)
res=res*tmp%c;
tmp=tmp*tmp%c;
}
return res;
}

int main()
{
int a,b,c,res=1;
scanf("%d%d%d",&a,&b,&c);
printf("%d\n",res);
return 0;
}

