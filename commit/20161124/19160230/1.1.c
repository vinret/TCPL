#include<stdio.h>
int GCD_recursive(int m, int n); 
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	m= GCD_recursive(m,n);
	printf("%d",m) ;
	return 0;
}
int GCD_recursive(int m, int n)
{
	int t;
  while(n!=0)
  { t=m%n ;
    m=n;
    n=t;
   }
 return m;

 } 
