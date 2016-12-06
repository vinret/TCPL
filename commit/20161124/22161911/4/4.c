#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{
    int m=0;
    while(n%10!=0)
    {
       m=m*10+n%10;
       n=(n-n%10)/10;
    }
    if(m==n) return 0;
    else  return -1;
}

int main()

{
    int n;
    scanf("%d",&n);
    
    if(is_int_pal(n)==0)
       printf("是回文数\n");
    else
       printf("不是回文数\n");
    return 0;
}
