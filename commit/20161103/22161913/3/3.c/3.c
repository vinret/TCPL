#include<stdio.h>
int main()
{
    int a,b,c,sum;
    int i=0,j;
    char d[100];
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b;
    if(!sum)  printf("0");
    while(sum)
    {
        d[i++]=sum%c+'0';
        sum=sum/c;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%c",d[j]);
    }
    return 0;
}

