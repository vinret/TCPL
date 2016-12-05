#include<stdio.h>
#include<string.h>
void reverse(char* str);
int main()
{
char str[100];
fgets(str,100,stdin);
reverse(str);
printf("%s\n",str);
return 0;
}

void reverse(char* str)
{
int i,temp;
for(i=0;i<strlen(str)/2;i++)
{
temp=str[i];
str[i]=str[strlen(str)-1-i];
str[strlen(str)-1-i]=temp;
}
}
