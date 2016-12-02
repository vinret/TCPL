#include <stdio.h>
int count1_in_bin(int n)
{
int a,i=0;
while(n!=0)
{
a=n%2;
if(a==1) {i++;}
n=n/2;
}
return i;
}
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",count1_in_bin(n));
return 0;
}
