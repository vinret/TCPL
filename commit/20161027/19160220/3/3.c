#include <stdio.h>
int main()
{
  int n,Step=0;
  printf("Please input n(n<=1000): ");
  scanf("%d",&n);
  if(n==0)
    printf("can't get n=1\n");
  else 
{
    while(n!=1)
{
       if(n%2==0)
          n=n/2;
       else
          n=(3*n+1)/2;
    Step=Step+1;
}
  printf("Step=%d\n",Step);
}
  return 0;
}
