#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int f[n];
	long a,b,c,d;
	 for(i=1;i<=n;i++)
	 {
	 	scanf("%ld %ld %ld",&a,&b,&c);
	 	d=a+c;
	 	if(d>c)
	 	f[i]=0;
	 	else
	 	f[i]=1; 
	 	}
	 for(i=1;i<=n;i++)
	 {
	 	if(f[i]=0)
	 		printf("Case #%d: tuue\n",i);
	 	else
	 		printf("Case #%d: false\n",i);
		 }	
	} 
