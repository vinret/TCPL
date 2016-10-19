#include<stdio.h>
int main()
{ 
    unsigned x=55,y,z;
    int p=5,n=3;
    y=~0;
    y=y<<n;
    y=~y;
    y=y<<(p-n+1);
    z=~x;
    z=z&y;    
    
    y=~0;
    y=y<<n;
    y=~y;
    y=y<<(p-n+1);
    y=~y;
    x=x&y;
 

    x=x|z;
    printf("%d\n",x);
    return 0;
}


