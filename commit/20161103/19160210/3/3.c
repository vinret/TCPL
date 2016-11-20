#include<stdio.h>
int main()
{
int a,b,c,d,i=0,s[100];
 scanf("%d%d%d",&a,&b,&d);
 c=a+b;
 while (c!=0)
 {s[i]=c%d;
  c=c/d;
  i++;}
 i-=1;
for (a=i;a>=0;a--)
 printf("%d\n",s[a]);
return 0;
}
