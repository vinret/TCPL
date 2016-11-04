#include<stdio.h>
int main()
{
int a,b,c,d,e=0,f=0,j=10,n=1;
 printf("请输入A，D（A），B,D(B)\n");
 scanf("%d%d%d%d",&a,&b,&c,&d);
  while (a!=0) 
{  if (a%j==b*(j/10))
   {e=n*b+e;
    n=n*10;}
  a=a-a%j;
  j=j*10;
}
  j=10;
  n=1;
  while (c!=0)
{  if (c%j==d*j/10)
   {f=f+n*d;
    n=n*10;}
 c=c-c%j;
 j=j*10;
}

 printf("%d\n",e+f);
return 0;
}    
