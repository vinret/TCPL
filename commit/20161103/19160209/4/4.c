#include<stdio.h>
#include<string.h>
int main()
{
	char a[100050],ch;
	int temp,i=0;
	scanf("%[^\n]",a);
	temp=strlen(a);
	while(i<temp)
	{
		if(a[i]<'a') a[i]=a[i]+32;
		i++;
	}
	int b[260]={0};
	for (i=0;i<temp;i++)
	{
		ch=a[i];
		b[ch]++;
	}
	int max=b[0],n=0;
	for(int i='a';i<='z';i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			n=i;
		}
	}
	printf("%c %d\n",n,max);
	return 0;
}
