#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
int n=strlen(str),i;
for(i=n-1;i>=0;i--) 
 printf("%c",str[i]);
printf("\n");
}

int main()
{
char str[10000];
gets(str);
reverse(str);
return 0;
}
