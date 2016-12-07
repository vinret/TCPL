#include<stdio.h>
int main()
{
int a[4]={0};
int w,i,j,n;
int max,min,o;
scanf("%d",&w);
n=w;
do{
for(i=0;w>0;i++)
{
a[i]=w%10;
w=w/10;}
if(a[0]==a[1]&&a[2]==a[3]&&a[1]==a[2])
{printf("%d-%d=0000\n",n,n);
return 0;}
for(i=0;i<3;i++)
{
for(j=0;j<3-i;j++)
{if(a[j]<a[j+1])
	{o=a[j];
	a[j]=a[j+1];
	a[j+1]=o;}
}}
max=a[0]*1000+a[1]*100+a[2]*10+a[3];
for(i=0;i<3;i++)
{
for(j=0;j<3-i;j++)
{if(a[j]>a[j+1])
        {o=a[j];
        a[j]=a[j+1];
        a[j+1]=o;}
}}
min=a[0]*1000+a[1]*100+a[2]*10+a[3];
printf("%d-%d=%d\n",max,min,max-min);
w=max-min;
}
while(w!=6174);
return 0;
}
