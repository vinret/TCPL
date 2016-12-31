#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
     int i,j;
     char temp;
     j=strlen(str)-1;
     for(i=0;i<j;i++,j--)
     {
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     }
}

int main()
{
    char str[100];
    gets(str);
    reverse(str);
    printf("%s\n",str);
    return 0;
}
     
