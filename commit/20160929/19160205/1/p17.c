#include<stdio.h>
int main()
{
  signed char a;
  unsigned char b;
  int c;
  short int d;
  unsigned short int e;
  signed short int f;
  float g;
  double h;
  
  printf("signed char size=%d\n",sizeof(a));
  printf("unsigned char size=%d\n",sizeof(b));
  printf("int size=%d\n",sizeof(c));
  printf("short int size=%d\n",sizeof(d));
  printf("unsigned short int size=%d\n",sizeof(e));
  printf("sined short int size=%d\n",sizeof(f));
  printf("float size=%d\n",sizeof(g));
  printf("double size=%d\n",sizeof(h));
  
  return 0;
}
