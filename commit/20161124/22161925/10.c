#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
      int l=strlen(str)-1;
      int i;
      char t;
      for(i=0;i<strlen(str)/2;i++)
      {
          t=str[i];
          str[i]=str[l-i];
          str[l-i]=t;
      }
}
int main()
{
    int i;
    char str[30];
    scanf("%s",str);
    reverse(str);
    for(i=0;i<strlen(str),i++)
        printf("%c",str[i]);
    printf("\n");
    return 0;
}
