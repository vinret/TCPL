#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
	int i,length;
	length=strlen(str);
	for (i=0;i<=length/2-1;i++)
	if (str[i]!=str[length-1-i])
    	return -1;
	return 0;
}
	int main()
{
	char str[1000];
	scanf("%s",&str);
	printf("%d\n",is_str_pal(str));
	return 0;
}

