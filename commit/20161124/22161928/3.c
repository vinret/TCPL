#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str)
{
    int i,len=strlen(str);
    for(i=0;i<len/2;i++)
       if(str[i]!=str[len-i-1])
          return -1;
       return 0;
}

int main()
{
    char c[50];
    const char*str;
    scanf("%s",c);
    str=c;
    if(is_str_pal(str))
      printf("不是回文串\n");
    else
      printf("是回文串\n");
    return 0;
}
