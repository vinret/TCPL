#include<stdio.h>
int main()
{
int i,j,a;
for(i=1;i<=9;i++)
{for(j=1;j<=i;j++)
{a=j*i;
printf("%d*%d=%d\t",j,i,a);
if(j==i)
printf("\n");
}
}
}
