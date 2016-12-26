#include<stdio.h>
#include<string.h>
char str[100];
int i;
void reverse(char* str)
{
   for(i=0;i<strlen(str)/2;i++)
   {
      str[i]=str[i]^str[strlen(str)-1-i];
      str[strlen(str)-1-i]=str[strlen(str)-1-i]^str[i];
      str[i]=str[i]^str[strlen(str)-1-i];
   }
}
int main()
{
   fgets(str,100,stdin);
   reverse(str);
   printf("%s\n",str);
   return 0;
}
