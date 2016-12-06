#include<stdio.h>
#include<string.h>
int is_str_pal(const char* str);

int is_str_pal(const char* str)
{
    int k=strlen(str),i=0;
    for(i=0;i<1/2;i++){
       if(str[i]!=str[k-i-1]){
        return -1;
       }
     }
     return 0;
}
int main()
{
    char a[100];
    const char*str;
    scanf("%s",a);
    str=a;
    if(is_str_pal(str))
      printf("This string isn't the palindrome string.\n");
    else
      printf("This string is the palindrome string.\n");
    return 0;
}
