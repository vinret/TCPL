#include<stdio.h>
int GCD(int m,int n);
int LCM(int m,int n);
int main()
{
    int m,n;
    printf("please input two numbers:\n");
    scanf("%d%d",&m,&n);
    printf("%d\n",LCM(m,n));
    return 0;
}
int GCD(int m,int n)
{
    int i,max,min;
    (m>n)?(max=m,min=n):(max=n,min=m);
    if(i=max%min==0)
    return min;
    if(i=max%min!=0)
    do{
       i=min;
       min=max%min;
       max=i;
      }
     while(min!=0);
     return max;
}
int LCM(int m,int n)
{
    int LCM;
    LCM=m*n/GCD(m,n);
    return LCM;
}
