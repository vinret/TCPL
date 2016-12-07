#include<stdio.h>
#include<math.h>
int main()
{
	int m,n=0,j,i=0,x,h=0;
	scanf("%d",&m);
	while(m/2!=0)
	{
		j=m%2;
		n=n+j*pow(10,i);
		m=m/2;
		i++;
	}
	n=n+m*pow(10,i);
	while(n/10!=0)
	{
		x=n%10;
		n=n/10;
		if(1==x)
		h++;
	}
	printf("%d\n",h+1);
}
