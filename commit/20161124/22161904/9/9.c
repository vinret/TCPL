#include<stdio.h>
int main()
{
    int N,N_,a[4],i,j,temp,max,min;
    printf("输入一四位正整数：");
    scanf("%d",&N);
    N_=N;
    while(N!=6174)
  {
    for(i=0;i<4;i++)
    {
       a[i]=N%10;
       N/=10;
    }
    for(i=0;i<3;i++)
       for(j=0;j<3-i;j++)
        if(a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
    min=1000*a[0]+100*a[1]+10*a[2]+a[3];
    max=1000*a[3]+100*a[2]+10*a[1]+a[0];
    N=max-min;
    if(min!=max)     
      printf("%d-%d=%d\n",max,min,N);
    else
      printf("%d-%d=0000\n",N_,N_);
  }
    return 0;
}
