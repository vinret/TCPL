#include<stdio.h>
#include<string.h>
int is_int_pal(int n)
{
    int i,j,s[1000];
    int flag=0;
    
    for(i=0,j=n-1;j>i;i++,j--)
        if(s[i]!=s[j])
        {
           flag=-1;
           break;
        }
    return flag;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",is_int_pal(n));

    return 0;
}
