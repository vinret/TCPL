#include<stdio.h>
void sort(int a[],int n)
{
    int i,j;
    for(i=0;i<3;i++)
       for(j=0;j<3-i;j++)
          if(a[j]>a[j+1])
          {
             a[j]=a[j]^a[j+1];
             a[j+1]=a[j+1]^a[j];
             a[j]=a[j]^a[j+1];
          }
}
int main()
{
    int N,i,a,b,A[4];
    scanf("%d",&N);
    do
    {
       for(i=0;i<4;i++)
       {
          A[i]=N%10;
          N/=10;
       }
       sort(A,4);
       a=A[3]*1000+A[2]*100+A[1]*10+A[0];
       b=A[0]*1000+A[1]*100+A[2]*10+A[3];
       N=a-b;
       printf("%04d - %04d = %04d\n",a,b,N);
    }while(N!=0&&N!=6174);
    return 0;
}
