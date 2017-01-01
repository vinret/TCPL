#include<stdio.h>
int GCD_recursive(int m,int n)
{
	int a,b,c,d;
	if (m<n)
    {
		a=m;
		m=n;
		n=a;
	}
    while(m%n!=0)
    {
		b=m%n;
		n=m;
		m=b;
	}
    if (m>n) 
		return m;
	else return n;
}
    int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
    printf("%d\n",GCD_recursive(m,n));
	return 0;
}
