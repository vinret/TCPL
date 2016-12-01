#include<stdio.h>
#include<string.h>
void print_hex(int a);
int main()
{
	int a;
	scanf("%d",&a);
	print_hex(a);
	return 0;
}
void print_hex(int a)
{
	int b[100];
	int i,j;
	for(i=0;j>=0;i++)
	{
		b[i]=a%16;
		j=a/16;
	}
	for(i=i;i>=0;i--)
	{
		if(b[i]<10)
		{
			printf("%d",b[i]);
		}
		else
		{
			printf("%c",('7'+b[i]));
		}
	}
}
