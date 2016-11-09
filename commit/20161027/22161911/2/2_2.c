#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("请输入正整数n(n>3):");
    scanf("%d",&n);
    j=sqtr(n);
    for(i=2;i<=j;i++)
    {
        if(n%i==0)
          j=1;
    }
    if(i>j)
       printf("%d是素数\n",n);
    else
       printf("%d不是素数\n",n);
    return 0;
}


