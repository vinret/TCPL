#include <stdio.h>
int main()
{
	int A,B,Da,Db,a=0,b=0;
	scanf("%d%d%d%d",&A,&Da,&B,&Db);
	while(A!=0)
	{
		if(A%10==Da)
			a=a*10+Da;
		   A=A/10;
	}
	while(B!=0)
	{
		if(B%10==Db)
			b=b*10+Db;
		   B=B/10;
	}
	printf("%d\n",a+b);
	return 0;
}

