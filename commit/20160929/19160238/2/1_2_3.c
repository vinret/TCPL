#include <stdio.h>
int main()
{
    char c;
   int i;
   float x;
   double z;
   short int s;
   unsigned short int u;
   unsigned int t;

   printf("char   size=%d\n",sizeof(c));
   printf("int    size=%d\n",sizeof(i));
   printf("float  size=%d\n",sizeof(x));
   printf("double size=%d\n",sizeof(z));
   printf("short int size=%d\n",sizeof(s));
   printf("unsigned short int size=%d\n",sizeof(u));
   printf("unsigned int size=%d\n",sizeof(t));

   return 0;
}


