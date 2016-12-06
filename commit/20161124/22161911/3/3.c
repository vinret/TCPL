#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    int i,j;
    i=0;
    j=strlen(str);
    while(i<j/2)
    {    
         if(str[i]!=str[j-i-1])  return -1;    
         i++;
     }
    return 0;
}

int main()
{
    char c[100];
    const char *str;
    scanf("%s",c);
    str=c;
    if(is_str_pal(str)==0)
       printf("是回文串\n");
    else
       printf("不是回文串\n");
    return 0;
}
