#include<stdio.h>
int main()
{
  int N,i,j,a,b,c;
  int n[4];
  scanf("%d",&N);
  do
  {
    for(i=0;i<4;i++)
    {
      n[i]=N%10;
      N=N/10;
    }
    for(i=0;i<3;i++)
      for(j=0;j<3-i;j++)
      {  if(n[j]>n[j+1])
         {    a=n[j];
              n[j]=n[j+1];
              n[j+1]=a;
         }
      }
    b=n[0]+10*n[1]+100*n[2]+1000*n[3];
    c=n[3]+10*n[2]+100*n[1]+1000*n[0];
    N=b-c;
    printf("%04d-%04d=%04d\n",b,c,N);
  }while(N!=6174&&N!=0);
  return 0;
}
