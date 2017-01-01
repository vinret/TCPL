#include <stdio.h>
#include<string.h>
int is_str_pal(const char*str)
{
	int i,l=strlen(str);
	for(i=0;i<l/2;i++)
		if(str[i]!=str[l-i-1])  return -1;
	return 0;
}

int main()
{
	char c[50];
	const char*str;
	scanf("%s",c);
	str=c;
	if(is_str_pal(str))
		printf("This string isn't the palindrome string.\n");
	else
		printf("This string is the palindrome string.\n");
	return 0;
}
