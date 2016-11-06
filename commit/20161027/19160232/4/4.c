#include<stdio.h>
#include<math.h>
int main()
{
	int s,n,m,i,j,k;
	n=0;
	printf("给出1个正整数s:");
	scanf("%d",&s);
	do
	{
		n++;
		m=2*pow(n,2)-1;
	}while(m<=s);
	n=n-1;
	m=2*pow(n,2)-1;
	for(j=1;j<=n;j++)
	{
		for(k=1;k<=j-1;k++)
		{
			printf("  ");
		}
		for(i=(2*n-1)-2*(j-1);i>=1;i--)
		{	
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	for(j=1;j<=n-1;j++)
	{
		for(k=n-1-j;k>=1;k--)
		{
			printf("  ");
		}
		for(i=(2*n-1)-2*j;i<=2*n-1;i++)
		{
			printf("*");
			printf(" ");	
		 } 
		 printf("\n");
	}
	printf("%d\n",s-m);
	return 0;	
}
