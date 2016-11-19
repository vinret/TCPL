#include<stdio.h>
#include<string.h>

int main()
{
        char a[1001];
	char b[26];
	int c[26]={0};
	int n,i,j,max,temp;
	
	gets(a);
	n=strlen(a);
	//printf("%s\n",a);

	for(i=0;i<26;i++)
		b[i]='a'+i;

	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			if(a[i]==b[j]||a[i]==b[j]-32)
				c[j]++;
		}
	}

	//printf("%d\n",c[0]);
	
	max=c[0];
	temp=0;

	for(i=0;i<26;i++)
	{
		if(max<c[i])
		{
			max=c[i];
			temp=i;
		}
	}

	printf("%c %d",b[temp],max);

	return 0;
}
