#include<stdio.h>
#include<string.h>
int is_int_pal(const char* str);
char *my_gets(char* str,size_t len);

char *my_gets(char* str,size_t len)
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

int is_int_pal(const char* str)
{
int i,j;
for(i=0,j=strlen(str)-1;j>i;i++,j--)
{
if(str[i]!=str[j]) {return -1;break;}
else return 0;                                     
}
}

int main()
{
char c[100];
const char* str;
size_t len=100;
str=c;
my_gets(str,len);
printf("%d\n",is_int_pal(str));
return 0;
}

