#include<stdio.h>
#include<math.h>
int GCD_recursive(int m,int n);


int GCD_recursive(int m,int n)
{
    int a;
    m=(int)fabs(m);
    n=(int)fabs(n);
    while(n!=0)
    {
      a=m%n;
      m=n;
      n=a;
    }
     return m;
}
int main()
{
   int a,m,n;
   scanf("%d%d",&m,&n);
     if(m<n)
     {
        a=m;
        m=n;
        n=a;
     }
    printf("%d\n",GCD_recursive(m,n));
    return 0;
}
       
