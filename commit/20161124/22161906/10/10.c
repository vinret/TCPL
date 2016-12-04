//反转字符串。void reverse(char* str); 接受一个字符串，将此串反转（如：”Homework”的反转为”krowemoH”） 。 
#include<stdio.h>
#include<string.h>
void reverse(char* str);
void reverse(char* str)
{
     int i;
     for(i=strlen(str)-1;i>=0;i--)
     printf("%c",str[i]);
  
}
  
int main()
{   
   char str[1000];
   printf("请输入一个字符串：");
   scanf("%s",str);
   reverse(str);
   printf("\n");
   return 0;
}
