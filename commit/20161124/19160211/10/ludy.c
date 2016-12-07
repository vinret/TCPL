#include <stdio.h>
#include <string.h>
#define MAX 50
void reverse(char * str);
int main()
{
 char str[MAX];
 printf("输入字符串\n");
 scanf("%s",str);
// printf("%s\n",str);
 reverse(str);
 return 0;
}
void reverse(char * str)
{
 int i,b,len,blen;
 len=strlen(str);
 blen=strlen(str)/2;
//printf("%d %d\n",len,blen);
 char r;
 for(i=0;i<blen;i++) 
 {
  b=len-i-1;
  r=str[i];
  str[i]=str[b];
  str[b]=r;
 };
 printf("%s",str);
 printf("\n");
} 
