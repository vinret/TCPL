#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y);

int main()
{ 
	unsigned x;
        int p;
        int n;
        unsigned y;
        
        scanf("%d,%d,%d,%d",&x,&p,&n,&y);
        printf("%d\n",setbits(x,p,n,y));
return 0;
}


unsigned setbits(unsigned x,int p,int n,unsigned y) 
{
	return x &~(~(~0<<n)<<(p+1-n))|(y & ~(~0<<n))<<(p+1-n);
}

