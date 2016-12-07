#include <stdio.h>
int GCD_recursive(int m,int n)
{
	int i;
	if(m%n==0) return n;
	else 	GCD_recursive(n,m%n);
}
int LCM(int m,int n)
{
	int x,y,f,g;
	x=GCD_recursive(m,n);
	if(x==n) return m;
	else 
	{
		f=m/x;
		g=n/x;
		y=x*f*g;
		return y;
	}	
}
int main()
{
	int m,n;
	printf("Please scanf m,n:");    
	scanf("%d %d",&m,&n);
	LCM(m,n);
	printf("The least common mutiple is: %d\n",LCM(m,n));
	return 0;	
}
