#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    int i,j;
    j=strlen(str)-1;
    for (i=0;i<j;i++,j--)
    if (str[i]==str[j]) 
       return 0;
    else
       return -1;
}

    int main()
{
    char c[100];
    gets(c);
    printf("%d\n",is_str_pal(c));
    return 0;
}
