#include<stdio.h>
#define PI 3.14//圆周率
int main()
{
float R=1;//半径
float S;//面积
float C;//周长

S=PI*R*R;
C=2*PI*R;

printf("%g\n",S);
printf("%g\n",C);

return 0;
}


