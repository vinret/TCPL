#include <stdio.h>
#include <math.h>
int main()
{
	float x=6.25,a=2.5,b=2,c=2;
	printf("When x=%f,a=%f,b=%f,c=%f\n",x,a,b,c);
	printf("The result of relational expression:\n sqrt(abs(x))!=4*a/(b*c)\nis\n");
	printf("%d\n",sqrt(abs(x))-(4*a/(b*c))>=10e-8);
	printf("1 means true,0 means fault\n");
	return 0;
}


