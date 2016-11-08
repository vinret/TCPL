#include <stdio.h>
int main()
{
	int x,A,n=1,a=1,DA,c=0,d=1,e=0,M;
	int y,B,N=1,Z=1,DB,C=0,D=1,E=0;
	scanf("%d%d%d%d",&A,&DA,&B,&DB);
	for(n=1;A/a>=10;n++)
		a=a*10;
	for(a=a;a>=1;a=a/10)
	{
		x=A/a;
		A=A-x*a;
		if(x==DA)
		{
			c=c+1;
		   continue;
		}
		else
			continue;
	}
	do
	{
		d=d*10;
		c=c-1;
	}while(c>1);
	do
	{
		e=e+DA*d;
		d=d/10;
	}while(d>=1);
	for(N=1;B/Z>=10;N++)
		Z=Z*10;
	for(Z=Z;Z>=1;Z=Z/10)
	{
		y=B/Z;
		B=B-y*Z;
		if(y==DB)
		{
			C=C+1;
		   continue;
		}
		else
			continue;
	}
	do
	{
		D=D*10;
		C=C-1;
	}while(C>1);
	do
	{
		E=E+DB*D;
		D=D/10;
	}while(D>=1);
	M=E+e;
	printf("%d\n",M);
	return 0;
}
