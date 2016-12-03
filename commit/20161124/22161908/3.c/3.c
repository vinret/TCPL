#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    int i;
    i=strlen(str);
    if(str[0]==str[i-1])
    return 0;
    else
    return -1;
}
int main()
{
    char c[50];
    const char* str;
    scanf("%s",c);
    str=c;
    if(is_str_pal(str))
    printf("is a character string\n");
    else
    printf("is not a character string\n");
    return 0;
}



