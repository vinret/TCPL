#include <stdio.h>
int main()
{
    int n,i=0;
    printf("请输入自然数n（0<n<1001） :");
    scanf("%d",&n); 
    while (n!=1)
    {
        if(n%2==1)
        {
        n=(3*n+1)/2;
         i++;
        }
        else
        {
        n=n/2;
        i++;
        }
    }
    printf("%d\n",i);
    return 0;
}
