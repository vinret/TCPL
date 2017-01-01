#include <stdio.h>
int GCD_recursive(int m,int n)
{
      if(m<n)
      {
	      m=m^n; n=m^n; m=m^n;
      }
      if(0==m%n)  return n;
      else        return GCD_recursive(m,m%n);
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",GCD_recursive(m,n));
	return 0;
}    
