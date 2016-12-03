#include<stdio.h>
int LCM(int m,int n);
int GCD(int m,int n);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("LCM<%d,%d>=%d\n",a,b,LCM(a,b));
    return 0;
}

int LCM(int m,int n)
{
    int i;
    i=(m*n)/GCD(m,n);
    return i;
}

int GCD(int x,int y)
{
    int k,max,min;
    (x>y)?(max=x,min=y):(max=y,min=x);
    if(k=max%min!=0)
    do{
       k=min;
       min=max%min;
       max=k;
      }while(min!=0);
    return max;
}
