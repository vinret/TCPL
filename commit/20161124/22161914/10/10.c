#include<stdio.h>
#include<string.h>
void reverse(char*str)
{
    int len=strlen(str);
    int times=len/2;
    char temp;
    int i;
    for(i=0;i<times;i++)
{
    temp=str[i];
    str[i]=str[len-i-1];
    str[-i-1]=temp;
}
}
int main()
{
    int i;
    char str[30];
    scanf("%s",str);
    reverse(str);
    for(i=0;i<strlen(str);i++)
    printf("%c",str[i]);
    printf("\n");
    return 0;
}
