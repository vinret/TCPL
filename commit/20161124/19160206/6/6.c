#include<stdio.h>
int count1_in_bin(int n);
int main()
{
 int n,s;
 scanf("%d",&n);
 s=count1_in_bin(n);
 printf("%d",s);
 return 0;
}
int count1_in_bin(int n)
{
  int count=0,a[101],i;
  for(i=0;n!=0;i++)
{      
    a[i]=n%2;
    n=n/2;
    if(a[i]==1)
{ 
  count++;} 
}
  return count;
}

