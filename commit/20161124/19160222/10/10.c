#include<stdio.h>
#include<string.h>
void reverse(char* str);

void reverse(char* str)
{
int i;
for(i=strlen(str);i>=0;i--)
{
printf("%c",str[i]);
}
printf("\n");
return;
}

int main()
{
char* str;
char c[100];
str=c;
scanf("%s",c);
reverse(str);
return 0;
}
