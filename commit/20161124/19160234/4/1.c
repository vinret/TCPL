#include <stdio.h>
int main()
{
    int n,temp;
    int sum=0;
    printf("请输入一个数字:");
    scanf("%d", &n);
    temp=n;
    while(n)
    {
        sum = sum*10 + n%10; 
        n /= 10;
    }
    if(temp == sum) 
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
