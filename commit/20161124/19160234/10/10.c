#include<stdio.h>
#include<string.h>
void reverse(char* str);


int main()
{
    char str[10000];
    scanf("%s",str);
    reverse(str);
    return 0;
}

void reverse(char* str)
{
    int i;
    for(i=strlen(str)-1;i>=0;i--)
	{
        printf("%c",str[i]);
    }
    printf("\n");
}

