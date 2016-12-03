#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],i,j;
	int a=1;
	gets(str);
	for(i=0,j=strlen(str)-1;j>i;i++,j--)
		if(str[i]!=str[j]){
			a=-1;
		break;
		}
		
		printf("%d",a);
		return 0;
}
