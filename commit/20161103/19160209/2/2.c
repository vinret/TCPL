#include<stdio.h>
int main()
{
	long long int a[10],b[10],c[10];
	int i=0,n;
	scanf("%d",&n);
		while(i<n)
		{
			scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);
			i++;
		}
		i=0;
//		printf("%d %d %d\n",a[i],b[i],c[i]);
		while(i<n)
		{
			if(a[i]+b[i]>c[i])
		        printf("Case #%d: true\n",i+1);
			else printf("Case #%d: false\n",i+1);
			i++;
		}
	return 0;
}
