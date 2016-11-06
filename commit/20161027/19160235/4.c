
#include <stdio.h>
int main()
{
char a;
int m,k,j,i,n;
scanf("%d %c",&n,&a);
for(i=0;(i*i*2-1)<=n;++i)
{}
--i;

for(j=i;j>=1;--j)
{
  for(m=i;m-j>0;--m)
    {
    printf(" ");
    }
  for(k=j*2-1;k>=1;--k)
    {
    printf("%c",a);
    }
printf("\n");
}

int g,l;
for(g=i,l=2;g>1;--g,++l)
{
  for(m=g-2;m>0;--m)
    {
    printf(" ");
    }
  if(l<=i)
  {
  for(k=1;k<=(2*l-1);++k)
    {
    printf("%c",a);
    }
   }
printf("\n");
}
int y=((n+1)-2*i*i);
printf("%d\n",y);
return 0;
}
A
A
A
A
A
A
A
A
A
Quick reply to:2874967992
