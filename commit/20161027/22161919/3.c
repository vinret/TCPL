#include<stdio.h>
int main()
{
  int n,j;
  printf("请输入一个正整数n(n<=1000):");
  scanf("%d",&n);
  
  for(j=0;n!=1;)
  {
    if(n%2==0)
      n=n/2;
    else
      n=(3*n+1)/2;
    j=j+1;
  }
  printf("需要%d次\n",j);

  return 0;
}
