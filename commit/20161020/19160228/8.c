#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
    char a[50];
	scanf("%d",&i);
	itoa(i,a,2);
	printf("%s %o %x\n",a,i,i);
	return 0;
}
