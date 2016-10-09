#include<stdio.h>
int main()
{
    char c;        
    int i;
    float x;
    double z;
    long int a;
    signed long int b;
    unsigned long int d;
    unsigned int e;
    short int f;
    signed short int g;
    unsigned short int h;

    printf("char  size=%d\n",sizeof(c));
    printf("int  size=%d\n",sizeof(i));
    printf("float  size=%d\n",sizeof(x));
    printf("double  size=%d\n",sizeof(z));
    printf("long int  size=%d\n",sizeof(a));
    printf("signed long int  size=%d\n",sizeof(b));
    printf("unsigned long int  size=%d\n",sizeof(d));
    printf("unsigned int  size=%d\n",sizeof(e));
    printf("short int  size=%d\n",sizeof(f));
    printf("signed short int  size=%d\n",sizeof(g));
    printf("unsigned short int  size=%d\n",sizeof(h));

    #define PI 3.14
    
       int radius=10;
       double area,circumference;
       
       area=PI* radius * radius;
       circumference=2*PI *radius;
       printf("area=%f\n",area);
       printf("circumference=%f\n",circumference);

       
     #include<stdio.h>
     #define N 2
     #define M N+3
       
       int j=0256, k=256, l=0x256;
       printf("%d, %d, %d\n", j,k,l);
       printf("%d\n",M*4);
       

    #include<stdio.h>
    char c1='x',c2='z';
    int x1=1, x2=2;
    printf("%d,%d\n",c1,c2);
    printf("%c,%c\n",c1,c2);
    printf("%c,%c\n",'0'+x1, '0'+x2);
    printf("%d,%d\n",'0'+x1, '0'+x2);
    return 0;
}
