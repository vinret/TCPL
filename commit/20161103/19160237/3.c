#include<stdio.h>
int main()
{
	int A,B,D;
	int i,temp;
	int a[100];

	scanf("%d %d %d",&A,&B,&D);

	temp=A+B;
	
	if(temp==0)
		printf("0");
	else
	{
	for(i=0;temp!=0;i++)
	{	a[i]=temp%D;
		temp=temp/D;
	}

	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
	}
	return 0;
}



