#include<stdio.h>
int main()
{
    int i,j,n,t,min,max;
    int num[4];
    scanf("%d",&n);
    do
    {
       for(i=1;i<4;i++)
       {
           num[i]=n%10;
           n/=10;
       }
       for(i=1;i<4;i++)
          for(j=0;j<4-i;j++)
          {
              if(num[j]>num[j+1])
              {
              t=num[j];
              num[j]=num[j+1];
              num[j+1]=t;
              }
          }
       max=num[0]+10*num[1]+100*num[2]+1000*num[3];
       min=num[3]+10*num[2]+100*num[1]+1000*num[0];
       n=max-min;
       printf("%04d-%04d=%04d\n",max,min,n);
    }while(n!=6174&&n!=0);
    return 0;
}
