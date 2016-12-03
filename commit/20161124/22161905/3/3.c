#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    char i,j;
    int flag=0;
    for(i=0,j=strlen(str)-1;j>i;i++,j--)
        if(str[i]!=str[j])
        {
           flag=-1;
           break;
        }
       
    return flag;
}
int main()
{
    char str[1000];
    scanf("%s",str);
    printf("%d",is_str_pal(str));

    return 0;
}
