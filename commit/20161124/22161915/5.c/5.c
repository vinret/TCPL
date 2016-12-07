#include<stdio.h>
int is_pow2(int n);

int main()
{
    int m;
    scanf("%d",&m);
    if (m%(m-1))
       printf("%d不是2的幂次方\n",m);
    else
       printf("%d是2的幂次方\n",m);
    return 0;
}

int is_pow2(int n)
{
    int x=0;
    while(n>1)
    {
       n>>=1;
       x++;
    }
    return x;
}
