#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    int n,i=1;
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {   scanf("%d%d%d\n", &a[i],&b[i],&c[i]);
     }
    for (i=1;i<=n;i++)
     {   if (a[i]+b[i]>c[i])
          printf("case #%d: true\n", i);
       else printf("case #%d: false\n", i);
   }
    return 0;
}

