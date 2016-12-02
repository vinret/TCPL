#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
    int i,temp;
    for(i=0;i<strlen(str)/2;i++)
    {
      temp=str[i];
      str[i]=str[strlen(str)-1-i];
      str[strlen(str)-1-i]=temp;
    }  
}
int main()
{
    int i;
    char str[10000];
    scanf("%s",str);
    reverse(str);
    for(i=0;i<strlen(str);i++)
    printf("%c\n",str[i]);
    return 0;
}
    

