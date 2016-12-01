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

int LCM(int m,int n)
{
    int k=GCD_iterative(m,n);
    int m1,n1;
    m1=m/k;
    n1=n/k;
    return m1*n1*k;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d\n",LCM(m,n));
    return 0;
}
