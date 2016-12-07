#include<stdio.h>
#include<string.h>
void string(char* str)
{
 int i;
 for(i=strlen(str)-1;i>=0;--i)
 printf("%c",str[i]);
 }

int main()
{
 char str[1000];
 printf("Please input a string: ");
 scanf("%s",str);
 string(str);
 printf("\n");
 return 0;
 }

