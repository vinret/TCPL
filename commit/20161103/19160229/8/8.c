#include<stdio.h>
int fac_bit_count(int n);

int main()
{
		int i,n;
		scanf("%d",&n);
		i=fac_bit_count(n);
		printf("%d\n",i);
		return 0;
}

int fac_bit_count(int n)
{
		int i,k,fac;
		fac=1;
		i=0;
		for(k=1;k<=n;k++){
				fac=fac*k;
		}
		do{
				fac=fac/10;
				i++;
		}while(fac>0);
		return i;
}
