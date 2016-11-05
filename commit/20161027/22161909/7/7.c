#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,x=1,y,i;
	printf("Please input a,b,c:  ");
	scanf("%d %d %d",&a,&b,&c);
	
        for(i=1;i<=b;i++)
		x=(a%c)*x;

        y=x%c;

	printf("a^b mod c=%d\n",y);
	return 0;
}


