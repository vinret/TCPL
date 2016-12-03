#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);
int main()
{
	int flag;
	char str[100];
	gets(str);
	flag=is_str_pal(str);
	printf("%d",flag) ; 
 } 
 is_str_pal(const char* str)
 {
 	char i,j;
 	int flag=0;
 	for(i=0,j=strlen(str)-1;j>i;i++,j--)
 		if(str[i]!=str[j])
 		{
 			flag=-1;
 			break;
		 }
	return flag;	 
 }
