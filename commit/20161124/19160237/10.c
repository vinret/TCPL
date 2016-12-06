#include<stdio.h>
void reverse(char* str)
{
	int i=0;
	char temp;
	while(str[i++]!='\0');
	i=i-1;
	for(int j=0;j<i/2;j++)
	{
		temp=str[j];
		str[j]=str[i-j-1];
		str[i-j-1]=temp;
	}
}

int main()
{
	char a[100];
	char* str=NULL;
	gets(a);
	str=a;
	reverse(str);
	puts(a);
	return 0;
}

