#include<stdio.h>
int main()
{
int c;
unsigned int i;
short int x;
unsigned short int z;

printf("int                  size=%lu\n",sizeof(c));
printf("unsigned int         size=%lu\n",sizeof(i));
printf("short int            size=%lu\n",sizeof(x));
printf("unsigned short int   size=%lu\n",sizeof(z));

return 0;
}
