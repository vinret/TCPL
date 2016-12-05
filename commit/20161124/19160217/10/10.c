#include<stdio.h>
#include<string.h>
void reverse(char* str);
int main()
{
  char str[101];int i=0;
  scanf("%s",str);
  reverse(str);
  return 0;
}

void reverse(char* str)
{   
   int c=strlen(str),i;
   for(i=0;i<c/2;i++)
       {
           char temp;
           temp=str[i];
           str[i]=str[c-i-1];
           str[c-i-1]=temp;
       }
    for(i=0;i<c;i++)
       printf("%c",str[i]);
}
  
   



