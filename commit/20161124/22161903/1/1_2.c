#include<stdio.h>
int GCD_iterative(int m,int n){
	int a,b;
	if(m<n){
		a=m;
		m=n;
		n=a;}
	if (m%n==0)return n;
	else return GCD_iterative(m%n,n);
}

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	printf("%d\n",GCD_iterative(m,n));
	return 0;
}
