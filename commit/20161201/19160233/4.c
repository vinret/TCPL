#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[]="Your name:";
	int n;
	printf("Please input your name\n");
	gets(a);
	n=strlen(a);
	if(strcmp(a,"Anstruct")>=0)printf("You have a long name made up of %d letters.\n",n);
	else printf("You have a short name made up of %d letters.\n",n);
	strcat(c,a);
	strcpy(a,c);
	strupr(a);
	puts(a);
	return 0;
}
