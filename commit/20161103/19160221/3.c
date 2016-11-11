#include <stdio.h>
int main()
{
int a,b,s,d,i,j;
scanf("%d %d %d",&a,&b,&d);
s=a+b;
if(s)
{
  char c[32];
  for(i=1;s!=0;++i)
      {
      c[i]=s%d;
      s=s/d;
      }
for(j=i-1;j>0;--j)
printf("%d",c[j]);
}
else
  printf("0");
return 0;
}
