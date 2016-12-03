#include<stdio.h>
int is_int_pal(int n);
int main()
{
	int n,flag;
	scanf("%d",&n);
	flag=is_int_pal(n);
	printf("%d",flag);
	return 0;
}
is_int_pal(int n)
{
	int flag; 
	int a=0,c,d;
	d=n;
	while(n%10!=0)
	{
		c=n%10;
		n=n/10;
		a=(a*10+c);
	}
	if(a==d)
		flag=0;
	else
		flag=-1;
	return flag;
		
}
