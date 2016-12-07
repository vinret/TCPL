#include <stdio.h>
int GCD_recursive(int m,int n);
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	  printf("最大公因数为：%d\n",GCD_recursive(m,n));
}
 int GCD_recursive(int m,int n)
  {
	 int r;
	 while(1)
	 {
		 r=m%n;
        if(r==0)
		 break;
		 m=n;
		 n=r;
	 }
	 
	 return n;
  }

