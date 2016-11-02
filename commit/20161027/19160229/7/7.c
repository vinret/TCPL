#include<stdio.h>
#include<math.h>
int main()
{
		long a,b,c,x;
		double y;
		scanf("%ld %ld %ld",&a,&b,&c);
		y=pow(a,b);
		x=(long)y%c;
		printf("%ld\n",x);
		return 0;
}
