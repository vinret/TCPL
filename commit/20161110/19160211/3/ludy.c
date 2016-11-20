#include <stdio.h>
void print_hex(int a)
{
  int i;
  char c[10];
  for(i=0;a!=0;++i)
      {
        if(a%16>=0&&a%16<10){ c[i]=(char)(a%16)+48;}
        else c[i]=(char)(a%16)+55;
        a/=16;
      }
      for(--i;i>=0;--i) printf("%c",c[i]);
  printf("\n");
}
int main()
{
  int a=-1;
  while(a<0)
  { printf("请输入十进制整数a(a>=0)：");
  scanf("%d",&a); }
  printf("a的十六进制数为：");
  if(a) print_hex(a);
  else printf("0\n");
  return 0;
}
