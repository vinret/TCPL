#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,c,i;
    scanf("%lld%lld%lld",&a,&b,&c);
    i=pow(a,b);
    printf("%lld\n",i%c);
	return 0;
}
