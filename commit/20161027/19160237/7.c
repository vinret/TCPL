#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;

	scanf("%d %d %d",&a,&b,&c);

	d=(int)pow(a,b);
	printf("%d\n",d%c);

	return 0;
}
