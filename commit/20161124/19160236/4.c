#include<stdio.h>
int is_int_pal(int n)
{
int sum=0,k;
k=n;
while(n!=0)
{
sum=sum*10+n%10;
n/=10;
}
if(sum==k) return 0;
else return -1;
}


int main()
{
int n,j;
scanf("%d",&n);
j=is_int_pal(n);
if(j==0) printf("This is a Palindromes\n");
if(j==-1) printf("This is not the Palindromes\n");
return 0;
}
