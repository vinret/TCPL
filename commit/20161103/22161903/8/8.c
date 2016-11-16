#include<stdio.h>
int Fac(int n)
{
        if(n==1) return 1;
        else return n*Fac(n-1);
}

int fac_bit_count(int n)
{
        int i=Fac(n),w=0;
        while(i>0){
                i=i/10;
                w++;
        }
		return w;
}

int main()
{
        int n;
        scanf("%d",&n);
        printf("%d!=%d,共%d位\n",n,Fac(n),fac_bit_count(n));
        return 0;
}

