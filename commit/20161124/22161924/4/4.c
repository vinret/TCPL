#include<stdio.h>
int is_int_pal(int n)
{ 
    int m;
    int num=0;
    m=n;
    while(m)
    { 
       num=num*10+m%10;
       m/=10;
    }
    if(num==n) return 0;
    else return -1;
}
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("%d\n",is_int_pal(n));

    return 0;
}

