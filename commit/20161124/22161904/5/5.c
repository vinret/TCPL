#include<stdio.h>
int is_pow2(int n)
{
    if(n&n-1)   
      return -1;
    else
      return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(is_pow2(n)==0)
       printf("%d是2的幂次方\n",n);
    else
       printf("%d不是2的幂次方\n",n);
    return 0;
}
