#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,x[1000];
    c=a+b;
    printf("Please input a,b,d:");
    scanf("%d%d%d",&a,&b,&d);
    for(i=0;c!=0;i++)
   {
    x[i]=c%d;
    c=c/d;
   }
    for(j=i-1;j>=0;j--)
       printf("%d",x[j]);
    return 0;
}
i
