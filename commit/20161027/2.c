#include<stdio.h>
int main()
{
   int n,i;
   printf("请输入n(n>=3):");
   scanf("%d", &n);
  for (i=1;i<=n-1;i++)
    if (n%i==0)
       break;
    if (n%i!=0)
     printf("%d不是素数\n",n );
    else printf("%d是素数\n", n);
    return 0;
}
