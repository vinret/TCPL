#include <stdio.h>
int main()
{
	int A,B,C,D;
	char a[100];
	scanf("%d%d%d",&A,&B,&D);
	C=A+B;
	itoa(C,a,D);
	printf("%s\n",a);
	return 0;
}
