#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
char a[100];
char p[][9]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
gets(a);
int s=0,i;
for(i=0;i<strlen(a);++i)
  {
  s=s+a[i]-48;
  }
int n=s,j,b[32];
for(i=0;n!=0;i++)
{
b[i]=n%10;
n=n/10;
}
printf("%s",p[b[i-1]]);
for(j=i-2;j>=0;--j)
printf(" %s",p[b[j]]);
return 0;
}
