#include <stdio.h>
#include <string.h>
int is_str_pal(char a[]);
int main()
{
 char a[10000];
 int b;
  b=is_str_pal(a);
  printf("%d",b);
return 0;
}
int is_str_pal(char a[])
{
 int i,j,s,flag=1;
  scanf("%s",a);
  s=strlen(a);
 for(i=0,j=(s-1);i<s;i++,j--)
  if(a[i]!=a[j])
return -1;
  else
return 0;
}

