#include<stdio.h>
int temp(int a,int b,int c);

int main()
{
	int n;
	scanf("%d",&n);
	long a[n][3];

	int i,j;
	for(i=0;i<n;i++)
		scanf("%ld %ld %ld",&a[i][0],&a[i][1],&a[i][2]);

	for(i=0;i<n;i++)
	{
		if(temp(a[i][0],a[i][1],a[i][2]))
		printf("Case #%d: true\n",i+1);
	        else
		printf("Case #%d: false\n",i+1);
	}

	return 0;

}


int temp(int a,int b,int c)
{
	if(a+b>c)
	return 1;
	else
	return 0;
}





