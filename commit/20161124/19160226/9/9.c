#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int m[4]={0};
    int a,b,c;
    scanf("%d",&n);
    do
    {

    for(i=0;i<4;i++)
    {
    m[i]=n%10;
    n/=10;
    }

    for(i=0;i<3;i++)
       for(j=0;j<3-i;j++)
       if(m[j]>m[j+1])
       {
          temp=m[j];
          m[j]=m[j+1];
          m[j+1]=temp;
       }

    a=1000*m[3]+100*m[2]+10*m[1]+m[0];
    b=1000*m[0]+100*m[1]+10*m[2]+m[3];
    c=a-b;
    printf("%04d - %04d = %04d\n",a,b,c);
    n=c;
  
    }
    while(n!=6174&&n!=0);
    return 0;
}

