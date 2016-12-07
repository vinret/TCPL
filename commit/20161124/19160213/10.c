#include<stdio.h>

void reverse(char* str)
{
char n[100];
int i=0,k,t,j;
k=strlen(str)-1;
j=k;
for(i=0;i<=k;i++,j--)
{n[i]=str[j];
printf("%c",n[i]);}
}

int main()
{
char str[100];
gets(str);
reverse(str);
printf("\n");
return 0;
}
