#include<stdio.h>
int is_pow2(int n)
{
        if (n%2==0)
        {       while(n%2==0)
                {
                        n=n>>1;
                }
                if (n==1)
                        return 0;
                else
                        return -1;
        }
        else if(n==1)
                return 0;
        else
                return -1;
}
int main()
{
        int n;
        scanf("%d",&n);
        if(is_pow2(n)==0)
                printf("是");
        else
                printf("否");
        return 0;
}

