#include <stdio.h>
int GCD_iterative(int m,int n)
{
	if(m%n==0) return n;
	else GCD_iterative(n,m%n);  
} 
int main()
{
	int m,n;
	printf("Please scanf m,n:");    
	scanf("%d %d",&m,&n);
	GCD_iterative(m,n);
	printf("The maximum common divisor is: %d\n",GCD_iterative(m,n));
	return 0;	
}
