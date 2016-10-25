#include <stdio.h>
int main()
{
	float f1,f2;
	int integer;
	char c;

	scanf("%f %d %c %f",&f1,&integer,&c,&f2);
	
	printf("%c %d %.2f %.2f\n",c,integer,f1,f2);

	return 0;
}
