#include<stdio.h>
int main()
{ 
  long long a[10],b[10],c[10];
  int x;
  scanf("%d",&x);
  for(int i=0;i<x;i++)
  {
   scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);
  }
  for(int j=0;j<x;j++)
  { 
   if((a[j]+b[j])>c[j])
   { 
   printf("Case #%d: true\n",j+1);
   
   }
    else
   { 
   printf("Case #%d: false\n",j+1);
  
   } 
   } 
  return 0; 
}
