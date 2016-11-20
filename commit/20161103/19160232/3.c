#include<stdio.h>
#include<math.h>
int main()
{
	int A,B,D,m,n=0,j,i=0;
	printf("输入A,B,D:");
	scanf("%d%d%d",&A,&B,&D);
	m=A+B;
	printf("%d\n",m);
	while(m/D!=0)
	{
		j=m%D;
		n=n+j*pow(10,i);
		m=m/D;
		i++;
	}
	n=n+m*pow(10,i);
	printf("%d\n",n);
}
