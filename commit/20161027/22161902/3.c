#include <stdio.h>
int main()
{
int n,i=0;
  printf("请输入n(n<1000)");
  scanf("%d",&n);
  while(n!=1)
  {
    if(n%2==0)
    {
      n=n/2;
      i++;
    }
    else
    {
      n=(3*n+1)/2;
      i++;
        }}
printf("共需%d步",i);
  return 0;
}
