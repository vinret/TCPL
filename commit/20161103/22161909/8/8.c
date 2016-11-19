#include <stdio.h>
int fac_bit_count(int n);
int main()
{
        int n,fan;
	scanf("%d",&n);
	fan=fac_bit_count(n);
	printf("%d\n",fan);
	return 0;
}
int fac_bit_count(int n)
{
	int i,jie=1,j;
	if(n==0) return 1;
	else
	{
		for(i=1;i<=n;i++) jie=jie*i;
	        for(j=0;jie!=0;j++) jie=jie/10;
	        return j;
	}
}

