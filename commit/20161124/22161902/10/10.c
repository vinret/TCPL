#include <stdio.h>
#include <string.h>
void reverse(char* str)
{
int n,i;
char str1[50];
strcpy(str1,str);
n=strlen(str1);
for(i=n-1;i>=0;i--)      //upside down
{
printf("%c",str[i]);
}
}
int main()
{
char str[50];
gets(str);
reverse(str);
printf("\n");
return 0;
}
