#include "stdio.h"
#include "string.h"
int main()
{
	char a[100],*str;
	int len,i;
	gets(a);
	len=strlen(a);
	str=a;
	for(i=len-1;i>=0;i--)
	{
		printf("%c",*(str+i));
	}
	return 0;
}
