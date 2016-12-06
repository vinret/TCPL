#include<stdio.h>
#include<string.h>
void reverse(char*str)
{
     int l=strlen(str)-1,i;
     char p;
     for(i=0;i<strlen(str)/2;i++)
     {
         p=str[i];
         str[i] =str[l-i];
         str[l-i]=p;
     }
}
int main()
{  
    int i;
    char str[100];
    scanf("%s",str);
    reverse(str);
    for(i=0;i<strlen(str);i++)
	printf("%c",str[i]);
    printf("\n");
    return 0;
}
