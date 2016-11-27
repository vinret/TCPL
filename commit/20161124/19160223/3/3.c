#include<stdio.h>

#include<string.h>

int is_str_pal(const char str[]);

int main()

{

         char str[50];

         gets(str);

         if(is_str_pal(str)==-1)

                  printf("%s is not a palindrome string.\n",str);

         else

                  printf("%s is a Palindrome string.\n",str);

         return 0;

}

int is_str_pal(const char str[])

{

         int flag;

         char i,j;

         for(i=0,j=strlen(str)-1;j>i;i++,j--)

                  if(str[i]!=str[j])

                  {

                          flag=-1;

                          break;

                  }

                  return flag;

}
