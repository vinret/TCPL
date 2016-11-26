#include<stdio.h>

#include<string.h>

void reverse(char* str);

int main()

{

         char* str[50];

         gets(str);

         reverse(str);

         return 0;

}

void reverse(char* str)

{

         char i,j,temp;

         for(i=0,j=strlen(str)-1;i<j;i++,j--)

         {

                  temp=str[j];

                  str[j]=str[i];

                  str[i]=temp;

         }

         for(i=0;i<strlen(str);i++)

                  printf("%c",str[i]);

         printf("\n");

}
