#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];
	int i=0,sum=0,temp;
	scanf("%s",a);
	temp=strlen(a);
//	printf("%d\n",temp);
	while(i<temp)
	{
		sum=sum+a[i]-48;
		i++;
	}

	int A[3]={sum%10,sum/10%10,sum/100};
	if(A[2]==0&&A[1]==0&&A[0]==0) printf("ling\n");
	else{
		for(i=2;A[i]==0;i--)
			A[i]=A[i];
	  while (i>=0)
	{
		
		switch(A[i])
		{
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
		        case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			default:printf("jiu");
		}
		if(i!=0) printf(" ");
		else printf("\n");
		i--;
	}}
//	printf("%d\n",sum);
	return 0;
}
