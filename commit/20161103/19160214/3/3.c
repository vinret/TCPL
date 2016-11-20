#include<stdio.h>
#include<math.h>
int main()
{ long long a,b,c,x,s,v;
  int d;
  int i=0;
  scanf("%lld%lld%d",&a,&b,&d);
  c=a+b;
  s=0;
  while(c>=1)
 { x=c%d;
   c=c/d;
    v=pow(10,i); 
   i=i+1;
  s=s+x*v;
} 

 printf("%lld\n",s);
 return 0;
}
