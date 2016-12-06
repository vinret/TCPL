#include<stdio.h>
#include<string.h>
void reverse(char*str)
{
     int l=strlen(str)-1,i;
     char temp;
     for(i=0;i<strlen(str)/2;i++)
     {
         temp    =str[i];
         str[i]  =str[l-i];
         str[l-i]=temp;
     }
}
int main()
{  
    int i;
    char str[30];
    scanf("%s",str);
    reverse(str);
    for(i=0;i<strlen(str);i++)
	printf("%c",str[i]);
    printf("\n");
    return 0;
}

