#include<stdio.h>
int LCM(int m,int n)
{
    int lcm,a,b;
    a=m*n;
    while(m%n!=0)
    {
          b=m%n;
          m=n;
          n=b;
    }
    lcm=a/b;
    return lcm;
}
int main()
{
    int m,n,lcm;
    printf("please intput two number(the first one is bigger):");
    scanf("%d%d",&m,&n);
    lcm=LCM(m,n);
    printf("%d\n",lcm);
    return 0;
}
