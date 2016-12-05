#include<stdio.h>
int LCM(int m, int n);
int main()
{
        int m,n,q,w,k,l;
        printf("请输入m，n的值：");
        scanf("%d %d",&m,&n);
        q=m;w=n;
        printf("请输入m，n的最大公约数%d\n",LCM(m,n));
        k=q/LCM(m,n);l=w/LCM(m,n) ;
        printf("m,n的最小公倍数为%d",k*l*LCM(m,n));
        return 0;
}
int LCM(int m, int n)
{
        int i=m%n;
        while(i>0)
        {
                m=n;
                n=i;
                i=m%n;
        }
        return n;
}

