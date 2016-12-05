#include<stdio.h>
#include<string.h>

int is_str_pal(const char* str)
{
int i=0,k,t;

k=strlen(str)-1;
for(i=0;i<k;i++,k--)
{
if(str[i]!=str[k])
{
t=-1;
break;
}
}
if(t==-1)
return -1;
else
return 0;
}


int main()
{
char str[100];
gets(str);
printf("%d\n",is_str_pal(str));
return 0;
}
