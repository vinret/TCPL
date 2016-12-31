#include<stdio.h>
#include<string.h>
int is_int_pal(int s)
{
    int i=0,j,count;
    int a[100];
    while(s!=0)
    {
    a[i]=s%10;
    s/=10;
    i++;
    }

    j=i-1;
    for (i=0;i<j;i++,j--)
    if (a[i]==a[j])
       return 0;
    else
       return -1;
}

    int main()
{
    int n;
    printf("Please input a number:");
    scanf("%d",&n);
    printf("%d\n",is_int_pal(n));
    return 0;
}

