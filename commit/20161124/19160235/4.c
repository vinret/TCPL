#include <stdio.h>
int is_int_pal(int n);
int main()
{
	int n;
    printf("请输入n:");
	scanf("%d",&n);
		printf("%d",is_int_pal(n));
	return 0;
}
int is_int_pal(int n)
{
	int m,sum=0;
	int flag;
	m=n;
	while(m)
	{
		sum=sum*10+m%10;
		m/=10;
	}
	if(sum==n)
		return 0;
	else
		return -1;
}

