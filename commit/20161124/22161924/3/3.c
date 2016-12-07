#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    char s[100];
    int i,j,k;
    k=strlen(s);
    for(i=0,j=k-1;i<j;i++,j--)
       if(s[i]!=s[j]) break;
    if(i>=j) return 0;
    else return -1;
}
int main()
{   
    const char* str;
    printf("请输入字符串：");
    gets(str);
    printf("%d\n",is_str_pal(str));
    return 0;
}
