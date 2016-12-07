//回文数的判断
#include<stdio.h>
int is_int_pal(int n)
{
    int i=0,j,a[100];
    while(n!=0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=0;j<=i;j++)
      if(a[j]==a[i-j-1])
         return 0;
      else
         return -1;
}
int main()
{
    int n;
    printf("输入一整数（位数小于100）: ");
    scanf("%d",&n);
    if(is_int_pal(n)==0)
       printf("该数是回文数\n");
    else
       printf("该数不是回文数\n");
    return 0;
}
