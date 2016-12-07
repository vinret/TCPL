#include<stdio.h>
#include<string.h>
void reverse(char* str);
char* my_gets(char* str,size_t len);

char* my_gets(char* str,size_t len)
{
int i;
for(i=0;i<len;i++)
{
scanf("%c",&str[i]);
if(str[i]=='\n') break;
}
str[i]='\0';
return str;
}

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
size_t len=100;
str=c;
my_gets(str,len);
reverse(str);
return 0;
}
