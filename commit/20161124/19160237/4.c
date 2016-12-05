#include<stdio.h>
int is_int_pal(int n)
{
	int i,j;
	int a[100];
	for(i=0;n>0;i++)
	{
		a[i]=n%10;
		n=n/10;
		//printf("%d\n",n);
	}
	j=i;
	for(i=0;i<j/2;i++)
	{
		if(a[i]!=a[j-i-1])
		{
			i--;
			break;
		}
	}
	//printf("%d %d\n",i,j/2);
	if(i==j/2)
		return 0;
	else
		return -1;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",is_int_pal(n));
	return 0;
}


