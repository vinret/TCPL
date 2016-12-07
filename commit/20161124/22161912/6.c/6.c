#include<stdio.h>
int count1_in_bin(int n)
{
    int i=0;
    while(n)
    {
       if(n&1)
          i++;
       n>>=1;
    }
    return i;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=count1_in_bin(n);
    printf("%d\n",m);
    return 0;
}
