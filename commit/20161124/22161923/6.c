#include<stdio.h>
int count1_in_bin(int n)
{
    int count=0;
    for(;n;n>>=1)
	if(n&1) ++count;
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("The number has %d '1'in the binary.\n",count1_in_bin(n));
    return 0;
}

