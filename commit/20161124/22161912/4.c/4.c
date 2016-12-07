#include<stdio.h>
int is_int_pal(int n)
{
    int m,a,b=0;
    a=n%10;
    m=n/10;
    b=b*10+a;
    while(m)
    {
       a=m%10;
       m/=10;
       b=b*10+a;
    }
    if(b==n)
       return 0;
    else
       return -1;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=is_int_pal(n);
    if(m)
       printf("%d is not Palindrome number\n",n);
    else 
       printf("%d is Palindrome number\n",n);
    return 0;
}
