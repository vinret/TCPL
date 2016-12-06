#include <stdio.h>
int GCD_recursive(int m,int n)
{
	int i;
	if(m%n==0) return n;
	else 
    for(i=m%n;;)
	{
		m=n;
		n=i;
		i=m%n;
		if(i==0) break;
	}
	return n;
} 
int main()
{
	int m,n;
	printf("Please scanf m,n:"); 
	scanf("%d %d",&m,&n);
	GCD_recursive(m,n);
	printf("The maximum common divisor is: %d\n",GCD_recursive(m,n));
	return 0;	
}
