#include <stdio.h>
int main()
{
	int n=1,i,j,k,a,b,s;
	char ch;
	scanf("%d %c",&s,&ch);
	{
	do
	{
		n=n+2;
	}while(((n*n+2*n-1)/2)<=s);
	}
	n=n-2;
	for(i=1;i<=n;i++)
	{
		if(i<=(n+1)/2)
		{
		   for(j=1;j<i;j++)
			   printf(" ");
		   for(k=1;k<=2*((n+1)/2-i+1)-1;k++)
			   printf("%c",ch);
		   printf("\n");
		}
		else
		{
			for(a=1;a<=(n-i);a++)
				printf(" ");
			for(b=1;b<=(2*(i-(n+1)/2))+1;b++)
				printf("%c",ch);
			printf("\n");
		}
	}
	printf("%d\n",s-(n*n+2*n-1)/2);
	return 0;
}
