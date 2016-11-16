#include <stdio.h>
int main()
{    
   long long a[10],b[10],c[10],x=0;    
   int i=0,j=0;
   scanf("%lld",&x);    
   for(i;i<x;i++)    
   {        
       scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);    
    }    
   for(j;j<x;j++)    
   {        
       if((a[j]+b[j])>c[j])    
       {            
          printf("Case #%d: true\n",j+1);
       }        
   else                    
       printf("Case #%d: false\n",j+1);            
    }
   return 0;
}

