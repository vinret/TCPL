#include<stdio.h>
#include<string.h>
void reverse(char* str);

int main()
{
 char str[10001];
 gets(str);
 reverse(str);
 return 0;
}

void reverse(char* str)
{
 int i,n;
 char temp;
 for(i=0;i<=strlen(str);i++)
  if(str[i]==0) break;
 n=i-1;
 for(i=0;i<n-i;i++)
 {
  temp=str[i];
  str[i]=str[n-i];
  str[n-i]=temp;
 }
 for(i=0;i<=n;i++)
  printf("%c",str[i]);
 printf("\n");
}
