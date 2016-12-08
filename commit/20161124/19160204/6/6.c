#include<stdio.h>
int count1_in_bin(int n);

int main()
{
 int n;
 
 printf("Please input n:");
 scanf("%d",&n);
 printf("%d\n",count1_in_bin(n));

 return 0;
}

int count1_in_bin(int n)
{
 int i=0;
 while(n!=0)
 {
  if(n%2==1)
   i++;
  n/=2;
 }
 return 0;
}
