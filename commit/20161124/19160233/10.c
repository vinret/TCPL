#include<stdio.h>
void reverse(char* str)
{
	char *p,a[1000],i=0;
	p=str;
	while(*p!=0)
	{
		a[i]=*p;
		i++;
		p++;
	}
	for(i=i-1;i>=0;i--)
		printf("%c",a[i]);
}
int main()
{
	char str[1000];
	gets(str);
	reverse(str);
	return 0;
}
