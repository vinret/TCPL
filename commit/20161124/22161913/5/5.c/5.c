#include<stdio.h>
int is_pow2(int n)
{
    if(((n&(n-1))==0)&&n>0)   return 0;
    else                      return -1;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(is_pow2(a)==0) 
       printf("%d是2的幂次方\n",a);
    else   printf("%d不是2的幂次方\n",a);
    return 0;
}

            

