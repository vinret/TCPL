#include<stdio.h>
int GCD_recursive(int m,int n)
{
	int temp;
	if(m<n)
	{
		temp=m;
		m=n;
		n=temp;
	}
	while(n!=0)
	{
 	temp=n;
	n=m%n;
	m=temp;
	//printf("%d %d\n",m,n);
	}
	return m;
}

int main()
{
  int m,n;
  scanf("%d %d",&m,&n);
  printf("%d\n",GCD_recursive(m,n));
  return 0;
}
