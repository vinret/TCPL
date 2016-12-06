#include<stdio.h>
#include<string.h>
int is_str_pal(char str[20])
{
    int i,j,len,flag=0;
    len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
         { flag=-1;
           break;}
     }
     return flag;
}
int main()
{
    char str[20];
    printf("输入字符串（长度小于20）：");
    gets(str);
    if(is_str_pal(str)==0)
       printf("该字符串是回文串\n");
    else
       printf("该字符串不是回文串\n");
    return 0;
}

