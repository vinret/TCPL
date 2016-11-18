#include<stdio.h>
int fac_bit_count(int n);
int main()
{
  int n;
  printf("请输入任意一个整数n:");
  scanf("%d",&n);
  printf("%d\n",fac_bit_count(n));
  return 0;
}
int fac_bit_count(int n)
{
  int a[100000];
  int t,c,d=1,i,j;
  a[0]=1;
  for(i=2;i<=n;i++)
  {  for(j=1,c=0;j<=d;j++)
     {  t=a[j-1]*i+c;
        a[j-1]=t%10;
        c=t/10;  }
     while(c)
     {  a[++d-1]=c%10;
        c/=10;  }
  }
  return d;
}
