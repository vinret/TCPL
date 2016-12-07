#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
    int n,i;
    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
       str[i]=str[i]^str[n-1-i];
       str[n-1-i]=str[n-1-i]^str[i];
       str[i]=str[i]^str[n-1-i];
    }
}
int main()
{
    int i;
    char c[20];
    gets(c);
    reverse(c);
    for(i=0;i<strlen(c);i++)
       printf("%c",c[i]);
    printf("\n");
    return 0;
}
