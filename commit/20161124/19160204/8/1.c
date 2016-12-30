#include<stdio.h>
#include<math.h>
int main()
{
 int i,x;
 scanf("%d",&x);
 for(i=2;i<=sqrt(x);i++)
  if(x%i==0) break;
 if(i>=sqrt(x)) printf("1");
 else printf("0");
 return 0;
}

