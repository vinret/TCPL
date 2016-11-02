#include<stdio.h>
#include<math.h>
int main ()
{
	int A,B,DA,DB,i,j=-1,k=-1,PA,PB,m=0,n=0;
	printf("依次输入A DA B DB (0<A,BA<10^10):");
	scanf("%d %d %d %d",&A,&DA,&B,&DB);
	do
	{
		i=A%10;
		A=A/10;
		if(i==DA)
		{
			j++;
		}
	
	}while(A>0);
	do
	{
		m+=DA*pow(10,j);
		j--;
	}while(j>=0);
	do
	{
		i=B%10;
		B=B/10;
		if(i==DB)
		{
			k++;
		}
		
	}while(B>0);
	do
	{
		n+=DB*pow(10,k);
		k--;
	}while(k>=0);
	printf("PA+PB=%d\n",m+n);
	return 0;
}
