#include<stdio.h>
#include<math.h>
int main()
{
         int n,a[100001],i,k,M,N;
         scanf("%d %d",&M,&N);
         if(M==1)
                  printf("2 ");
         for(n=3,i=1;i<=N-1;n++)
                  for(k=2;k<n;k++)
                  {
                          if(n%k==0)
                                   break;
                          if(k>sqrt(n))
                          {
                                   a[i]=n;
                                   i++;
                                   if(i>=M&&i<=N)
                                   {
                                            printf("%d",p[i-1]);
                                            if((i-M+1)%10==0||i==N)
                                                     printf("\n");
                                            else
                                                     printf(" ");
                                   }
                                   break;
                          }
                  }
         return 0;
}		

