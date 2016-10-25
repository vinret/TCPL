#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int b=a%10;
  int c=a/10%10;
  int d=a/100;
  printf("%d",d+c*10+b*100);

 return 0;
}
