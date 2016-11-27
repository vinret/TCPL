#include<stdio.h>
#include<string.h>
int is_int_pal(const char* str);

int is_int_pal(const char* str)
{
int i;
i=strlen(str);
if(str[0]==str[i-1]) return 0;
else return -1;
}

int main()
{
char c[100];
const char* str;
str=c;
scanf("%s",c);
printf("%d\n",is_int_pal(str));
return 0;
}
