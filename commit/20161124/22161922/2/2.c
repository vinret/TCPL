#include<stdio.h>
int LCM(int m,int n);

int LCM(int m,int n)
{
        int t;
        t=m*n;
        while(m>0 && n>0)
        {
                if(m>n)
                        m=m%n;
                else
                        n=n%m;
        }
        if (m==0)
        return t/n;
      else
      return t/m;
}
int main()
{
        int m,n;
        scanf("%d %d",&m,&n);
        printf("%d",LCM(m,n));
        return 0;
}
