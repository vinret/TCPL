#include<stdio.h>
#include<string.h>
int main()
{
	char *str,*string;
	char str1[100];
	int len;
	gets(str1);
	len=strlen(str1);
	str=&str1[0];
	string=&str1[len-1];
	for(;str<string;str++,string--)
	if(*str!=*string)  break;
	if(str>=string)  printf("0\n");
	else printf("-1\n");
}

