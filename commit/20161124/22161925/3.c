#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
	int i,j=strlen(str);
	for(i=0;i<j/2;i++)
	{
		if(str[i]!=str[j-i-1]) return -1;
		else return 0;
	}
}
int main()
{
	char c[10];
	const char*str;
	scanf("%s",c);
	str=c;
	if(0==is_str_pal(str)) printf("This string is a palindrome.\n");
	else printf("This string is not a palindrome.\n");
	return 0;
}
