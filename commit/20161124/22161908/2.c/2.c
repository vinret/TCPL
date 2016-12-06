#include<stdio.h>
int LCM(int m,int n);

int LCM(int m,int n)
{
     int a,b;
     scanf("%d%d",&m,&n);
     if(m<n)
     {
       a=m%n;
       m=n;
       n=a;
     }
     while(a!=0)
     {
       b=m*n/a;
     }
       return b;
}
int main()
{
     int m,n,c;
     if(m<n)
     {
       c=m;
       m=n;
       n=c;
     }
      printf("%d\n",LCM(m,n));
      return 0;
}
        
