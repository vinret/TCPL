#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
     int i,j,k;
     char* str1[100];
     j=strlen(str)-1;
     k=j;
     for(i=0;i<=j;i++,k--)
     {
        str1[i]=str[k];
        printf("%c",str1[i]);
     }
}
int main()
{
    char* a[100];
    puts("请输入字符串: ");
    gets(a);
    reverse(a);
    printf("\n");
    return 0;
}
