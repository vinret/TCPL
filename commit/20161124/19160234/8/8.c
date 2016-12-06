#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
	int i,t=1,k;
	int a[10000];a[0]=0;
	for(i=2;i<10000;i++)
	{
		if(prime(i))
		{
		    a[t]=i;
		    t++;
		}
    }
	int m,n;
	printf("请输入mn的值(m<n):");
	scanf("%d %d",&m,&n);
	k=0;
	while(m<=n)
	{
		printf("%d\t",a[m]);
	    m++;
		k++;
		if(k%10==0)
			printf("\n");
	}

	printf("\b");

	return 0;
}
int prime(int i)
{
	int n;
	for(n=2;n<sqrt(i);n++)
	{
		if(i%n==0)
		return 0;
	}
	return 1;

}
