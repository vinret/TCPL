#include<stdio.h>
int main()
{
    int step=0,n;
    printf("请输入n:");
    scanf("%d",&n);
    
    while(n!=1)
    {
         n=n%2?(3*n+1)/2:n/2;
         step++;
    }
    printf("%d\n",step);
    return 0;
}
