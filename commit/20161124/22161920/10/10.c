#include<stdio.h>
void reverse(char* str);

int main()
{
char str[30];
printf("请输入字符串：\n");
gets(str);
reverse(str);
puts(str);
return 0;
}

void reverse(char* str)
{
int i,n,t;
for(i=0;str[i]!='\0';i++)
;
char a;
t=i/2;
for(n=0;n<t;n++)
{
a=str[i-1];
str[i-1]=str[n];
str[n]=a;
i--;
}}
