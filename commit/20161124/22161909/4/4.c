#include <stdio.h>
#include <string.h>
int is_int_pal(int n);
int main()
{
	int n,result;
	scanf("%d",&n);
	result=is_int_pal(n);
	printf("%d\n",result);
	return 0;
}

int is_int_pal(int n)
{
	int N=n,i,j,re;
	for(i=0;N!=0;i++)
		N/=10;
	int z1[i],z2[i];
	for(j=0;n!=0;j++)
	{
		z1[j]=n%10;
		z2[i-1]=n%10;
		i--;
		n/=10;
	}
	re=strcmp(z1,z2);
	if(re==0)
		return 0;
	else 
		return -1;
}






