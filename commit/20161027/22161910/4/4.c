#include<stdio.h>
#include<math.h>
int main()
{
  int n,a,i,j,k;
  char b;
  scanf("%d %c",&n,&b);
   a=(n+1)/2;
   a=sqrt(a);
  for(i=a;i>=1;i--)
{
 for(j=1;j<=a-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
  printf("%c",b);
 printf("\n");
}
for(i=2;i<=a;i++)
{
for(j=1;j<=a-i;j++)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("%c",b);
printf("\n");
}
printf("%d\n",n-2*a*a+1);
return 0;
}
