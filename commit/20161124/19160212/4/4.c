#include<stdio.h>
int is_int_pal(int n);

int is_int_pal(int n)
{
int i=0,x[100];
int j,k;
while(n!=0)
{
x[i]=n%10;
n/=10;
i++;
}
for(j=0,k=i-1;k>j;j++,k--)
{
if(x[j]!=x[k]) {return -1;break;}
else return 0;
}
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",is_int_pal(n));
return 0;
}

