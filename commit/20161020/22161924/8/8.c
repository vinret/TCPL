#include <stdio.h>
int showbit(int n)
{
    if(n>1){
	showbit(n/2);
	printf(" ");
	}
    printf("%d",n%2);
}
int main()
{
    int a;
    scanf("%d",&a);
    showbit(a);
    printf("\n");
    printf("%o,%x\n",a,a);
    return 0;
}
