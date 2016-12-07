#include<stdio.h>

int is_int_pal(int n)
{
int a[10],b[10],i=0,j,t=0;

for(i=0;n!=0;i++)
{
a[i]=n%10;
n/=10;
//printf("%d",a[i]);
}
//printf("\n");


for(j=0;i>0;j++,i--)
{
b[j]=a[i-1];
//printf("%d",b[j]);
}

for(i=i+1;i<j;i++)
{
if(b[i]!=a[i])
{
t=-1;
break;
}
}

if(t==-1)
return -1;
else 
return 0;
}


int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}
