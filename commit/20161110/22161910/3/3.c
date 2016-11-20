#include<stdio.h>
void print_hex(int a)
{
  char c[100];
  int i=0;
  whlie(a>0)
{
  switch(a%16)
  {
  case 0:c[i]='0';break;
  case 1:c[i]='1';break;
  case 2:c[i]='2';break;
  case 3:c[i]='3';break;
  case 4:c[i]='4';break;
  case 5:c[i]='5';break;
  case 6:c[i]='6';break;
  case 7:c[i]='7';break;
  case 8:c[i]='8';break;
  case 9:c[i]='9';break;
  case 10:c[i]='A';break;
  case 11:c[i]='B';break;
  case 12:c[i]='C';break;
  case 13:c[i]='D';break;
  case 14:c[i]='E';break;
  default:c[i]='F';break;
}
  i++;
  a/=16;
}
 for(i=0;i>=0;i--)
 printf("%c\n",c[i]);
}
int main()
{
   int a;
   scanf("%d",&a);
   print_hex(a);
   printf("\n");
   return 0;
}
