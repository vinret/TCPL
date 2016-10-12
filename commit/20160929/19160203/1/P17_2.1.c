#include<stdio.h>
int main()
{
char a;
int b;
signed long int c;
unsigned short int d;
float e;
double f;

printf("char size=%d\n",sizeof(a));
printf("int size=%d\n",sizeof(b));
printf("signed long int size=%d\n",sizeof(c));
printf("unsigned short int size=%d\n",sizeof(d));
printf("float size=%d\n",sizeof(e));
printf("double size=%d\n",sizeof(f));

return 0;
}
