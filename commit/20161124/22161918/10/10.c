#include<stdio.h>
#include<string.h>
void reverse(char* str);
int main()
{
  char s[100];
  fgets(s,100,stdin);
  reverse(s);
  printf("%s\n",s);
  return 0;
}
void reverse(char* str)
{
  char c;
  int i,j;
  for(i=0,j=strlen(str)-1;j>i;i++,j--)
  {  c=str[i];
     str[i]=str[j];
     str[j]=c; }
}
    
