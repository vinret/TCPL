#include<stdio.h>
#include<math.h>

main()
{
	double a,b;
	int c,d;
	scanf("%lf%lf%d",&a,&b,&c);
	d=(int)pow(a,b)%c;
	printf("%d",d);
	return 0;
}
