#include<stdio.h>
int main()
{
    int a,b,d,i=0;
    scanf("%d%d%d",&a,&b,&d);
    char str[1000]={0};
    int n=a+b;
    char temp;
    while(n>=d)
{
    str[i++]='0'+n%d;
    n/d;
}
    str[i]='0'+n;
    for(n=0;n<i-n;n++)
    temp=str[n],str[n]=str[i-n],str[i-n]=temp;
    printf("%s",str);
    return 0;
}
