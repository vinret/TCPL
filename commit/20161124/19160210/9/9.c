#include<stdio.h>
int main()
{
int a[4],b,i,j,temp,m,n=0;
scanf("%d",&m);
b=m;
for (i=0;i<4;i++)
  {a[i]=m%10;m/=10;}
if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3])
 {printf("%d%d%d%d-%d%d%d%d=0\n",a[0],a[0],a[0],a[0],a[0],a[0],a[0],a[0]);return 0;}

m=b;
while(m!=6174)
 {for (i=0;i<4;i++)
  {a[i]=m%10;m/=10;}
for(i=3;i>0;i--)
  for(j=0;j<i;j++)
   if(a[j]>a[j+1])
     {temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
m=a[0]+a[1]*10+a[2]*100+a[3]*1000;
n=a[0]*1000+a[1]*100+a[2]*10+a[3];
printf("%d%d%d%d-%d%d%d%d=%d\n",a[3],a[2],a[1],a[0],a[0],a[1],a[2],a[3],m-n);
m-=n;
 }
return 0;
}   
