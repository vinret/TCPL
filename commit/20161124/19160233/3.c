#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
	char a[1000],*p;
	int n=0,i=0,j=0;
	p=str;
	while(*p!='\0')
	{
		a[i]=*p;
		i++;
		p++;
	}
	for(i=i-1,j=0;i>j;i--,j++)
	{
	
			if(a[i]!=a[j])
			{
				n=-1;
				break;
			}
	}
		return n;
}
int main()
{
	char str[1000];
	int i;
	gets(str);
	printf("%d",is_str_pal(str));
}

