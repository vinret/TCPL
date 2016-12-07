#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
     int i;
     for(i=strlen(str)-1;i>=0;i--)
     {
         printf("%c",str[i]);
     }
     printf("\n");
}    
int main()
{
    char Str[10000];  
    printf("Please input string:");
    scanf("%s",Str);
    reverse(Str);
 
    return 0;
}
