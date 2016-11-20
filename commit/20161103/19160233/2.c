#include<stdio.h>
int main()
{
	int T,i,j=0;
	int a[10][3];
	scanf("%d",&T);

	for(j=0; j<T; j++)
		for(i=0;i<3;i++)
			scanf("%d",&a[j][i]);

	for(j=0;j<T;j++)
	{
		if(a[j][0]+a[j][1]>a[j][2])
			printf("case #%d: true\n",(j+1));
		else
			printf("case #%d: false\n",(1+j));
	}
	return 0;
}
