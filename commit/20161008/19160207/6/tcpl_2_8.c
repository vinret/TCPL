#include<stdio.h>
int main(void)
{
unsigned long int x=7;
int n=2;
int M=x>>n;//x右移n位
unsigned long int N=(x&~(~0<<n))<<31|M;
printf("%o",N);
return 0;
}

