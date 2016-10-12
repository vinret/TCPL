#include<stdio.h>
int main()
{
   char a;
   float b;
   double c;
   int d;
   long int e;
   signed long int f;
   unsigned int g;
   short int i;
   signed short int j;
   unsigned short int k;

   printf("char  size=%d\n",sizeof(a));
   printf("float  size=%d\n",sizeof(b));
   printf("double  size=%d\n",sizeof(c));
   printf("int  size=%d\n", sizeof(d));
   printf("long int  size=%d\n",sizeof(e));
   printf("signed long int   size=%d\n",sizeof(f));
   printf("unsigned int  size=%d\n",sizeof(g));
   printf("short int  size=%d\n",sizeof(i));
   printf("signed short int  size=%d\n",sizeof(j));
   printf("unsigned short int  size=%d\n",sizeof(k));

#include<stdio.h>
#define PI 3.14
   int radius=10;
   double area, circumference;
   
   area = PI *radius *radius;
   circumference = 2*PI * radius;
   printf("area=%f\n", area);
   printf("circumference=%f\n", circumference);
    


#include<stdio.h>
#define N 2
#define M N+3
   int o=0256, p=256, q=0x256;
   printf("%d, %d, %d\n", o,p,q);
   printf("%d\n", M*4);
     




#include<stdio.h>
   char c1='x',c2='z';
   int x1=1, x2=2;
   printf("%d,%d\n",c1,c2);
   printf("%c,%c\n",c1,c2);
   printf("%c,%c\n",'0'+x1, '0'+x2);
   printf("%d,%d\n",'0'+x1, '0'+x2);

   return 0;
}
