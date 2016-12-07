#include<stdio.h>
int is_int_pal(int n)
{
    int m,sum=0;
    scanf("%d",&n);
    m=n;
    while(m)
    { 
      sum=sum*10+m%10;
      m/=10;
    }
    if(sum==n) return 0;
    else       return -1;      
}
int main()
{
    int a;
    scanf("%d",&a);
    if(is_int_pal(a))
       printf("%d不是回文数\n",a);
    else
       printf("%d是回文数\n",a);
    return 0;
}

