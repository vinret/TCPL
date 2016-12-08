#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
int n,i;
n=strlen(str);
for(i=n-1;i>-1;i--)
printf("%c",*(str+i));
printf("\n");
}

int main()
{
int i;
char str[100];
for(i=0;i<100;i++)
{
scanf("%c",&str[i]);
if(str[i]=='\n') break;
}
reverse(str);
return 0;
}
