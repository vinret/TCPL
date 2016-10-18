#include <stdio.h>
int main()
{ 
   char a;
   int b;
   float c;
   double d;
   long int e;
   short int f;
   signed long int g;
   signed short int h;

   printf("char size=%d\n",sizeof(a));
   printf("int  size=%d\n",sizeof(b));
   printf("float size=%d\n",sizeof(c));
   printf("double size=%d\n",sizeof(d));
   printf("long int  size=%d\n",sizeof(e));
   printf("short int size=%d\n",sizeof(f));
   printf("signed long int size=%d\n",sizeof(g));
   printf("signed short int size=%d\n",sizeof(h));
 
  return 0;
}

