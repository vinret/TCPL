#include<stdio.h>
int Fac(int);

int main()
{
	int m,n;
	scanf("%d",&n);
	
	m=Fac(n);
	printf("%d!=%d\n",n,m);
	
	return 0;
 } 
 
 int Fac(int n)
 {
 	if(n==1)
 	  return 1;
 	else
 	  return n*Fac(n-1);
 }
