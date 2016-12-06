#include<stdio.h>
int GCD_recursive(int m,int n)
{
    if(m<n){
      m=m^n; n=m^n; m=m^n;
    }
    int t;
    while(m%n){
	t=n; 
        n=m%n;
        m=t;
    }
    return n;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",GCD_recursive(m,n));
    return 0;
}    
