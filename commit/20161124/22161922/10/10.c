#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
        int i;
        for(i=strlen(str)-1;i>=0;i--)
                printf("%c",str[i]);
                }
int main()
{
        char str[100];
        scanf("%s",str);
        reverse(str);
        return 0;
}

