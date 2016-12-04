#include<stdio.h>
#include<string.h>
int is_int_pal(int n);
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}

int is_int_pal(int n)
{
int a[100];
int i,j,flag=0;
for(i=0;n>0;i++) {
a[i]=n%10;
n=n/10;}
for(i=0,j=i-2;j>i;j--,i++)
if(a[i]!=a[j])
{   flag=-1;
break;  }
return flag;
}
