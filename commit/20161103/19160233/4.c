#include<stdio.h>
#include<string.h>
int count(char c[1000],char letter);
int main()
{
	char a[26],b[1000],d[1];
	int i,k,max=0,n;
	int n1,n2=0,n3;
	gets(b);
	strcpy(b,strupr(b));

	for(i=0;i<26;i++)
	{
		a[i]='A'+i;
		k=count(b,a[i]);
		if(k>max)
		{
			max=k;
			n=i;
		}
	}
	d[0]='a'+n;
	printf("%c %d",d[0],max);
	return 0;
}
int count(char c[1000],char letter)
{
	int n1,n2=0,n3;
	n3=strlen(c);
	for(n1=0;n1<=n3;n1++)
	{
		if(c[n1]==letter)
			n2++;
	}
	return n2;
}
