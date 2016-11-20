#include<stdio.h>
int main()
{
int i, T;
long int a,b,c;
printf("please input the number T(T<=10&&T>=0): ");
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%ld %ld %ld",&a,&b,&c);
printf("case# %d: %s\n",i,a+b>c?"true":"false");
}
return 0;
}
