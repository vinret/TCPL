#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);

int main()
{
        char a[100];
        const char * str;
        scanf("%s",a);
        str=a;

        if(is_str_pal(str)==0)
                printf("不是回文");
        else
                printf("是回文");
        return 0;
}

int is_str_pal(const char* str)
{
        int i,j;
        int flag=1;
        for(i=0,j=strlen(str)-1;j>i;i++,j--)
                if(str[i]!=str[j])
                {
                        flag=0;
                        break;
                }
        return flag;
}

