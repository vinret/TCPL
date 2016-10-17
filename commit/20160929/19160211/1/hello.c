#include <stdio.h>
int main()
{  int a;
   float b;
   double c;
   long int d;
   short int e;
   signed int f;
   unsigned int g;
   char h;
  
   printf("int  size=%d\n",sizeof(a));
   printf("float size=%d\n",sizeof(b));
   printf("double size=%d\n",sizeof(c));
   printf("long int  size=%d\n",sizeof(d));
   printf("short int size=%d\n",sizeof(e));
   printf("signed int size=%d\n",sizeof(f));
   printf("unsigned int size=%d\n",sizeof(g));
   printf("char size=%d\n",sizeof(h));
  return 0;
}
