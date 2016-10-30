#include <stdio.h>
int main()
{
int A,DA,B,DB,i1=0,i2=0;
printf("请输入");
scanf("%d %d %d %d",&A,&DA,&B,&DB);
while(A!=0)
{int a;
a=A%10;
if(a==DA)
{i1=i1*10+a;
A=A/10;}
else
A=A/10;
}
while(B!=0)
{int b;
b=B%10;
if(b==DB)
{i2=i2*10+b;
B=B/10;}
else
B=B/10;
}
printf("PA+PB=%d\n",i1+i2);
return 0;
}

