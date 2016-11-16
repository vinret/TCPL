#include<stdio.h>
#include<math.h>
int main()
{
 int N,n,i,j;
 char x;
 scanf("%d %c",&N,&x);
 n=floor(sqrt((N+1)/2));
 for(i=n;i>=1;i--)
 {
  for(j=1;j<=n-i;j++)
   printf(" ");
  for(j=1;j<=2*i-1;j++)
   printf("%c",x);
  printf("\n");
 }
 for(i=2;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
   printf(" ");
  for(j=1;j<=2*i-1;j++)
   printf("%c",x);
  printf("\n");
 }
 printf("%d\n",N-n*n*2+1);
 return 0;
}
