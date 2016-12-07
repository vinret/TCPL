#include<stdio.h>
#include<string.h>

int is_str_pal(const char* str);

int main()
{
char str[30];
int a;
printf("请输入字符串：\n");
gets(str);
a=is_str_pal(str);
if(a==0)
printf("该串回文！\n");
else
printf("该串不回文!\n");
return 0;
}

int is_str_pal(const char* str)
{
int len,i,t;
len=strlen(str);
t=len/2;
for(i=0;i<t;i++)
{
	if(str[i]==str[len-1])
	len--;
	else
	return -1;
}
return 0;
}
