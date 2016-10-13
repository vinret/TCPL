#include<stdio.h>
int main()
{
int                   a;
long int              b;
signed long int       c;
unsigned int          d;
unsigned long int     e;
short int             f;
signed short int      g;
unsigned short int    x;
float                 y;
double                z;

printf("int                size=%ld\n", sizeof(a));
printf("long int           size=%ld\n", sizeof(b));
printf("signed long int    size=%ld\n", sizeof(c));
printf("unsigned int       size=%lu\n", sizeof(d));
printf("unsigned long int  size=%lu\n", sizeof(e));
printf("short int          size=%lu\n", sizeof(f));
printf("signed short int   size=%lu\n", sizeof(g));
printf("unsigned short int size=%lu\n", sizeof(x));
printf("float              size=%lu\n", sizeof(y));
printf("double             size=%lu\n", sizeof(z));

return 0;
}
