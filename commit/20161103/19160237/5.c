#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100001];
	int i,n,N;
	int sum=0,temp;
	int x=0,y=0;
	gets(a);
	n=strlen(a);

	for(i=0;i<n;i++)
	{       
		temp=tolower(a[i]);
		if(temp>96&&temp<123)
			sum=sum+temp-96;
	}
 
	//printf("%d\n",sum);

	while(sum>0)
	{
		if(sum%2==0)
			x++;
		else
			y++;

		sum=sum/2;
	}

	printf("%d %d\n",x,y);

	return 0;
}







