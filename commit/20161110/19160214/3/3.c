#include<stdio.h>
void print_hex(int a);
int main()
{
  int b;
  scanf("%d",&b);
  printf("%dD=",b);
  print_hex(b);
  printf("H\n");
  return 0;
}
void print_hex(int a)
{
   char c;
   if(a==0) return;
      switch(a%16)
      {
         case 0:c='0';break;
         case 1:c='1';break;
         case 2:c='2';break;
         case 3:c='3';break;
         case 4:c='4';break;
         case 5:c='5';break;
         case 6:c='6';break;
         case 7:c='7';break;
         case 8:c='8';break;
         case 9:c='9';break;
         case 10:c='A';break;
         case 11:c='B';break;
         case 12:c='C';break;
         case 13:c='D';break;
         case 14:c='E';break;
 print_hex(a/16);
      printf("%c",c);
}
}