#include <stdio.h>  
#include <stdlib.h>  
void reverse(char *str);  
int main()  
{  
   char *str;  
   char arr[100];
   gets(arr);
   str=arr;  
   reverse(str);  
   printf("%s\n",str);  
   return 0;  
}  
 void reverse(char *str)  
 {  
     char *end=str;  
     char tmp;  
     if(str)  
     {  
         while(*end)  
         {  
            ++end;  
         }  
            --end;  
         while(str<end)  
         {  
             tmp=*str;  
             *str=*end;  
             *end=tmp;  
             ++str;  
             --end;  
         }  
     }  
 }  

