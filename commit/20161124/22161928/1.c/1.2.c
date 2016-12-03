#include<stdio.h>
int GCD_recursive(int m,int n);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("GCD<%d,%d>=%d\n",a,b,GCD_recursive(a,b));
    return 0;
}
 
int GCD_recursive(int m,int n)
{
    int i,max,min;
    (m>n)?(max=m,min=n):(max=n,min=m);
    if(i=max%min!=0)
    do{
       i=min;
       min=max%min;
       max=i;
      }while(min!=0);
    return max;
}

