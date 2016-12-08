#include<stdio.h>
#include<string.h>
int main()
{
  char Text[10]="weartheAB";
  char *ptr;
  char a='a';
  ptr=strchr(Text,a);
  printf("a的位置在Text的第%d个位置\n",ptr-Text+1);
}
