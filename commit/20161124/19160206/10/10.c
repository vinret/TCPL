#include<stdio.h>
#include<string.h>
int i=0;
{
 while(i<=strlen(str))
{
str1[i]=str[strlen(str)-i];
   printf("%c",str1[i]);
   i++;
}
}
int main()
{
char str[50];
 printf("Please input a string:");
 gets(str);
 reverse(str);
 return 0;
}


