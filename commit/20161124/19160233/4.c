#include<stdio.h>
int is_int_pal(int n)
{
	int i=0,j;
	char a[1000];
	while((a[i]=getchar())!='\n')
	{
		i++;
	}
	for(j=0,i=i-1;i>j;j++,i--)
	{
		if(a[i]!=a[j])
		{
			n=-1;
			break;
		}
	}
	return n;
}
int main()
{
	int i;		
	i=is_int_pal(0);
	printf("%d",i);
	return 0;
}

