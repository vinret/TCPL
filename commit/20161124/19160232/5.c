#include<stdio.h>
#include<string.h>
int main()
{
	int arr[100];
	int len,i=0,j;
	scanf("%d",&j);
	while(j/10!=0)
	{
		arr[i]=j%10;
		i++;
		j=j/10;
	}
	len=i+1;
	arr[i]=j;
	j=len-1;
	for(i=0;i<j;i++,j--)
	if(arr[i]!=arr[j])  break;
	if(i>=j)   printf("0\n");
	else  printf("-1\n");
 }
