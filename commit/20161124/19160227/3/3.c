#include<stdio.h>
#include<string.h>
int is_str_pal(const char str[]);
int main()
{
	char str[100];
	gets(str);
printf("%d\n",is_str_pal(str));
	return 0;
}
int is_str_pal(const char str[])
{
	int flag=0;
	char i,j;
	for(i=0,j=strlen(str)-1;j>i;i++,j--)
		if(str[i]!=str[j])
		{
			flag=-1;
			break;
		}
		return flag;
}

