#include <stdio.h>
#include <string.h>
int main()
{
	int i,sum=0,sum_1;
	char string[100001];
	int yi=0,ling=0;
	int length;
	
	gets(string);
	length=strlen(string);
	
	for(i=0;i<length;i++)  {  if((string[i]>=65)&&(string[i]<=90)) string[i]=string[i]+32;         }
	for(i=0;i<length;i++)  {   if((string[i]>=97)&&(string[i]<=122)) sum=sum+(string[i]-96);  }
	sum_1=sum;
	for(i=0;sum_1!=0;i++) sum_1=sum_1/2;
	
	int z[i],j;
	for(j=0;sum!=0;j++) 
	{
		z[j]=sum%2;
		sum=sum/2;
	}
	for(j=0;j<i;j++)
	{
		if(z[j]==0) ling++;
		if(z[j]==1) yi++;
	}
	printf("%d %d\n",ling,yi);
	return 0;
}
	
		

