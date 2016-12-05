#include<stdio.h>
int count1_in_bin(int n);
int main()
{
  int a;
  scanf("%d",&a);
  printf("%d\n",count1_in_bin(a));
  return 0;
}
int count1_in_bin(int n)
{
  int m=0,i,j,c[100];
  for(i=0;n>0;i++)
  {  c[i]=n%2;
     n/=2; }
  for(j=0;j<i;j++)
  {  if(c[j]==1) 
     m++; }
  return m;
}
