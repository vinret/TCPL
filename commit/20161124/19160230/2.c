#include<stdio.h>
int LCM(int m, int n);
int main()
{
	int m,n,x,y,z,a;
	scanf("%d %d",&m,&n);
	x=m;
	y=n;
	m= LCM(m,n);
	x=x/m;
	y=y/m;
	z=m*x*y;
	printf("%d",z);
	return 0;
}
LCM(int m, int n)
{
		int t;
  while(n!=0)
  { t=m%n ;
    m=n;
    n=t;
   }
 return m;
}
