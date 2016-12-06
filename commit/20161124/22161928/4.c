#include<stdio.h>
int is_int_pal(int n);
 
int main()
{
    int m;
    scanf("%d",&m);
    if (is_int_pal(m))
       printf("是回文数\n");
    else
       printf("不是回文数\n");
    return 0;
}


int is_int_pal(int n)
{
    int i,j,str[11];
    for(i=0;n>0;i++)
    {
        str[i]=n%10;
        n/=10;
    }
    for(j=0;j<i/2;j++)
       if(str[j]!=str[i-j-1])
         return -1;
       return 0;
}
