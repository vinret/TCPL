#include<stdio.h>

int is_int_pal(int n);

int main()
{
long int a;
int b;
scanf("%ld",&a);
b=is_int_pal(a);
if(b==0){
printf("该数是回文数!\n");
}
else{
printf("该数不是回文数!\n");
}
return 0;
}

int is_int_pal(int n)
{
long int m=0,s;
int a[100]={0},i,x=1;
s=n;
for(i=0;s>0;i++)
{
a[i]=s%10;
s=s/10;
}
for(i=i-1;i>=0;i--)
{
m=m+a[i]*x;
x=x*10;
}
if(m==n){
return 0;
}
else{
return -1;
}
}
