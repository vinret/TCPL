#include<stdio.h>
int main()
{
    unsigned x=8,y=6,z;
    int p=3,n=2;
    z=~0;
    z=z<<n;
    z=~z;
    z=z<<(p-n+1);
    z=~z;
    x=x&z;
    
    z=~0;
    z=z<<n;
    z=~z;
    y=y&z;
    y=y<<(p-n+1);
    
    z=x|y;
   
    printf("%d\n",z);
    return 0;
} 
  

