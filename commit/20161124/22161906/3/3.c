// 回文串的判断
#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str); 

int is_str_pal(const char* str) 
{
    char i,j;
    int flag=0;
    for(i=0,j=strlen(str)-1;i<j;i++,j--)
    if(str[i]!=str[j])
 {
    flag=-1;
    break;
  }
       return flag;
  
}
 
int main()
{
    char str[10000];
    printf("请输入一个字符串：");
    scanf("%s",str);
    printf("%d\n", is_str_pal(str));
    return 0;
}
