#include <stdio.h>
int main()
{
	int A,a,B,b,m,n,sum;
	int i1=0,i2=0;
	int x=0,y=0;

	scanf("%d %d %d %d",&A,&m,&B,&n);

	do
	{
		a=A%10;
		if(a==m)
			i1++;
		A=A/10;
	}while(A!=0);
	
	i1--;

	if(i1==-1)
		x=0;
	else
		while(i1>=0)
		{
			x=x+m*pow(10,i1);
			i1--;
		}

	do
	{
		b=B%10;
		if(b==n)
			i2++;
		B=B/10;
	}while(B!=0);

	i2--;

	if(i2==-1)
		y=0;
	else
		while(i2>=0)
		{
			y=y+n*pow(10,i2);
			i2--;
		}

	sum=x+y;
	printf("%d\n",sum);
	
	return 0;

}
