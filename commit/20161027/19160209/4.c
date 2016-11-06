#include<stdio.h>
#include<math.h>
int main()
{
int i,n,x;
char c;
//printf("Please input n,fuhao\n");
scanf("%d %c",&n,&c);
(int)(x=sqrt(2*n+2));
x=x-1;
if(x%2==0) x=x-1;
else x=x;                   //printf("%d\n",x) hangshu

int p=1,j,k;
for (i=1;i<=(x-1)/2;i++)
 {
  for (j=1;j<i;j++)
  printf(" ");
  for (k=1;k<=x-p+1;k++)
  printf("%c",c);
    printf("\n");
    p=p+2;
 }                           //shangbufen

int q=1;
for (i=(x-1)/2;i>=0;i--)
 {
  for (j=1;j<=i;j++)
  printf(" ");
  for (k=1;k<=q;k++)
  printf("%c",c);
    q=q+2;
    printf("\n");
 }
int m;                             //xiabufen
m=(x+1)*(x+1)/2-1;
m=n-m;
printf("%d\n",m);
return 0;
}
