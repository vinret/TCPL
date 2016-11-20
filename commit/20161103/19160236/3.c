#include<stdio.h>
#include<string.h>
int main()
{
int c[100];
int a,b,i,D,sum;
scanf("%d %d %d",&a,&b,&D);
sum=a+b;
for(i=0;sum!=0;i++)
{
c[i]=sum%D;
sum/=D;
}
for(i=i-1;i>=0;i--)
printf("%d",c[i]);
printf("\n");
return 0;
}

