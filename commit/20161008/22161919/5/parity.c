#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int flag = n&1;
    printf("%d\n",flag);
    
    return 0;
}
