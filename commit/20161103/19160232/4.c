#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i,len,k=0,max,m=0,n;
	int arr[26]={0};
	printf("请输入一组字符串:");
	gets(str);
	len=strlen(str);
	for(i=1;i<=len;i++)
	{
		if((int)str[i-1]<=90&&(int)str[i-1]>=65)
		{
			str[i-1]=str[i-1]+32;
		}
	}
	for(i=1;i<=len;i++)
	{
		if((int)str[i-1]>=97&&(int)str[i-1]<=122)
		{
		k=(int)str[i-1]-97;
		arr[k]+=1;
		}
	}
	m=arr[0];
	n=97;
	for(i=1;i<=25;i++)
	{
		if(arr[i]>m)
		{
		m=arr[i];
		n=i+97;
		}
	}
	printf("%c %d\n",n,m);
	return 0;
}
