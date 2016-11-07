#include <stdio.h>
#include<math.h>
int main()
{
  int A,DA,B,DB,u,v,a,b;
  printf("分别输入A，DA，B，DB的值，其中0<A,B<(pow(10,10))\n");
  scanf("%d %d %d %d",&A,&DA,&B,&DB);
  if(A<=0||B<=0||A>=(pow(10,10))||B>=(pow(10,10)))
  {printf("所给数值未在定义域内\n");return 1;};
  int x,y,k;
  k=0;
  u=0;
  v=0;
  for(x=10;x>=0;x--)
    {a=A/(pow(10,x));
     if(a==DA)
     k++;
     A=A-a*(pow(10,x));};
  for(k=k;k>0;k--)
  u=u+DA*(pow(10,k-1));
  
  for(y=10;y>=0;y--)
     {b=B/(pow(10,y));
     if(b==DB)
     k++;
     B=B-b*(pow(10,y));};
   for(k=k;k>0;k--)
  v=v+DB*(pow(10,k-1));
  
  int c;
  c=u+v;
  printf("%d\n",c);
  return 0;
}
