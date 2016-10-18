#include<stdio.h>
unsigned invert(unsigned x,int n,int p);

int main()
{      
 unsigned x;                                                              
 int n;
 int p;
        
        scanf("%d,%d,%d",&x,&n,&p);
 
        printf("%d\n",invert(x,n,p));
        return 0;
}


unsigned invert(unsigned x,int n,int p)
{
	return (~x&(~(~0<<n)<<(p-n+1)))|(x&~(~(~0<<n)<<(p-n+1)));
}
