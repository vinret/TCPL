#include<stdio.h>
void print_hex(int a)
{
	int i=0,arr[100];
	while(a/16!=0)
	{
		arr[i]=a%16;
		i++;
		a=a/16;
	}
	arr[i]=a;
	for(;i>=0;i--)
	{
		if(arr[i]>=10&&arr[i]<=15)
		printf("%c",arr[i]+55);
		else
		printf("%d",arr[i]);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);
	printf("\n");
	return 0;
}
