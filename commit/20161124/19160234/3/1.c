#include <stdio.h> 
#include <string.h>
int main()
{
    char str[100];  // 存放输入的字符串 
    int i, j, n;
    printf("输入字符串：");
    gets(str);
    
    n=strlen(str);
    for(i=0,j=n-1;i<j;i++,j--)
        if(str[i]!=str[j]) break;
        if(i>=j)
            printf("是回文串\n");
        else
            printf("不是回文串\n");
    return 0;
}
