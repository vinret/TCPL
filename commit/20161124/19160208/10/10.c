#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
	for(int i=strlen(str)-1;i>=0;i--)
	printf("%c",str[i]);
	printf("\n");
} 
int main()
{
char a[10000];
gets(a);
reverse(a);
return 0;
}
				          
