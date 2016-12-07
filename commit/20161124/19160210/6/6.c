#include<stdio.h>
int count1_in_bin(int n)
{
int a[64],i=0,b=0;
while (n!=0)
 {a[i]=n%2;
  n/=2;
  i++;}
for (int j=0;j<i;j++)
  if(a[j]) b++;
return b;
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",count1_in_bin(n));
return 0;
}
