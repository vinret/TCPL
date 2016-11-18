#include <stdio.h>
int is_prime(int n);
int main()
{
        int z[1000],j,shu=2;
	for(j=0;j<=999;shu++)
	{
		if(is_prime(shu)==0) { z[j]=shu;j++; }
	}
	for(j=99;j<=999;j++)
		printf("%d ",z[j]);
	printf("\n");
	return 0;
}

int is_prime(int n)
{
	int i,p;
	if(n==2) return 0;
	else
	{
	
	    if(n%2==0) return -1;
	    else
	    {  
		p=(n+1)/2;
		for(i=3;i<p;i++) { if(n%i==0) break; }
		if(i==p) return 0;
		else return -1;
	    }
	}
}

