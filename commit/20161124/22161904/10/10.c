#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("输入一长度小于20的字符串：");
    scanf("%s",str);
    for(i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
    printf("\n");
    return 0;
}



    

