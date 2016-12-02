#include<stdio.h>

int main()

{

         int N,a[4],i,j,temp,result,max,min;

         scanf("%d",&N);

         i=-1;

         do

         {

                  i++;

                  a[i]=N%10;

                  N=N/10;

         }while(N!=0);

         if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])

         {

                  result=a[0]+a[1]*10+a[2]*100+a[3]*1000;

                  printf("%04d - %04d = %04d\n",result,result,result-result);

         }

         else

         {

                  N=a[0]+a[1]*10+a[2]*100+a[3]*1000;

         do

         {

         i=-1;

         do

         {

                  i++;

                  a[i]=N%10;

                  N=N/10;

         }while(N!=0);

         if(i==2)

                  a[3]=0;

         for(i=i;i>=0;i--)

         {

                  for(j=i-1;j>=0;j--)

                  {

                          if(a[j]<a[i])

                          {

                                   temp=a[i];

                                   a[i]=a[j];

                                   a[j]=temp;

                          }

                  }

         }

         min=a[0]+a[1]*10+a[2]*100+a[3]*1000;

         max=a[3]+a[2]*10+a[1]*100+a[0]*1000;

         result=max-min;

         printf("%04d - %04d = %04d\n",max,min,result);

         N=result;

         }while(result!=6174);

         }

         return 0;

}
